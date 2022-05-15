/**
 * @file main.c
 * @author Lokesh R
 * @brief A project main file for circuit simulation
 * @version 0.1
 * @date 2022-04-22
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "diag/trace.h"
#include "timer.h"
#include "led.h"



// ----- Timing definitions --------------------------------------------------------------

// Keep the LED on for 1Hz, 4Hz and 8Hz
// 1Hz means fliker 1 time in 1000ms
// 4Hz means fliker 4 time in 1000ms and 8Hz means fliker 8 time in 1000ms
#define BLINK_ON_TICKS  (1000)			// 1000/1
#define BLINK_OFF_TICKS (250)			// 1000/4
#define TICKS (125)				// 1000/8

// ----- function main() ------------------------------------------------------------------

// Sample pragmas to cope with warnings. Please note the related line at
// the end of this function, used to pop the compiler diagnostics status.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

// Defining LEDs and counter
int GREEN=12,ORANGE=13,RED=14,BLUE=15;
uint8_t flag=0;

void EXTI0_IRQHandler(void);

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

// Main block-------------------------------------------------------------------------------
int main(int argc, char* argv[])
{
  // Send a greeting to the trace device (skipped on Release).
  trace_puts("Hello Arm World!");

  // At this stage the system clock should have already been configured
  // at high speed.
  trace_printf("System clock: %u Hz\n", SystemCoreClock);

  timer_start();

  blink_led_init(BLUE);
  blink_led_init(GREEN);
  blink_led_init(ORANGE);
  blink_led_init(RED);

  Switch_init();

  // Infinite loop until system turns OFF
  while (1)
    {
	  if(flag==1)
	  {
      blink_led_on(RED);
      }
	  else{	
		  if(flag==2){						// Wiper Level 1
			  blink_led_on(BLUE);
			  timer_sleep(BLINK_ON_TICKS);
			  blink_led_on(GREEN);
			  timer_sleep(BLINK_ON_TICKS);
			  blink_led_on(ORANGE);
			  timer_sleep(BLINK_ON_TICKS);
			  blink_led_off(ORANGE);
			  timer_sleep(BLINK_ON_TICKS);
			  blink_led_off(GREEN);
			  timer_sleep(BLINK_ON_TICKS);
			  blink_led_off(BLUE);
			  timer_sleep(BLINK_ON_TICKS);
		  }else
		  {
			  if(flag==3){					// Wiper Level 2
				  blink_led_on(BLUE);
				  timer_sleep(BLINK_OFF_TICKS);
				  blink_led_on(GREEN);
				  timer_sleep(BLINK_OFF_TICKS);
				  blink_led_on(ORANGE);
				  timer_sleep(BLINK_OFF_TICKS);
				  blink_led_off(ORANGE);
				  timer_sleep(BLINK_OFF_TICKS);
				  blink_led_off(GREEN);
				  timer_sleep(BLINK_OFF_TICKS);
				  blink_led_off(BLUE);
				  timer_sleep(BLINK_OFF_TICKS);
			  }else
			  {
				  if(flag==4){				// Wiper Level 3
				        blink_led_on(BLUE);
				        timer_sleep(TICKS);
				        blink_led_on(GREEN);
				        timer_sleep(TICKS);
				        blink_led_on(ORANGE);
				        timer_sleep(TICKS);
				        blink_led_off(ORANGE);
				        timer_sleep(TICKS);
				        blink_led_off(GREEN);
				        timer_sleep(TICKS);
				        blink_led_off(BLUE);
				        timer_sleep(TICKS);
				  }
			  }
		  }
	  } // Wiper OFF
    }
  // Infinite loop, never return-------------------------------------------------------------
}

void EXTI0_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if(GPIO_Pin == GPIO_PIN_0) // If The INT Source Is EXTI Line9 (PA0 Pin)
    {
    flag++;
    if(flag>4){
           	 flag=1;
            }
    }
}
// ----------------------------------------------------------------------------
