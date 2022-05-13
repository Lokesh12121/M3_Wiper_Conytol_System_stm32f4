/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "diag/trace.h"

#include "timer.h"
#include "led.h"

// ----------------------------------------------------------------------------
//
// Standalone STM32F4 led blink sample (trace via DEBUG).
//
// In debug configurations, demonstrate how to print a greeting message
// on the trace device. In release configurations the message is
// simply discarded.
//
// Then demonstrates how to blink a led with 1 Hz, using a
// continuous loop and SysTick delays.
//
// Trace support is enabled by adding the TRACE macro definition.
// By default the trace messages are forwarded to the DEBUG output,
// but can be rerouted to any device or completely suppressed, by
// changing the definitions required in system/src/diag/trace-impl.c
// (currently OS_USE_TRACE_ITM, OS_USE_TRACE_SEMIHOSTING_DEBUG/_STDOUT).
//

// ----- Timing definitions -------------------------------------------------

// Keep the LED on for 2/3 of a second.
#define BLINK_ON_TICKS  (1000)
#define BLINK_OFF_TICKS (250)
#define TICKS (125)

// ----- main() ---------------------------------------------------------------

// Sample pragmas to cope with warnings. Please note the related line at
// the end of this function, used to pop the compiler diagnostics status.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

int GREEN=12,ORANGE=13,RED=14,BLUE=15;
uint8_t flag=0;

void EXTI0_IRQHandler(void);

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

int
main(int argc, char* argv[])
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
  uint32_t seconds = 0;

  // Infinite loop
  while (1)
    {
	  if(flag==1)
	  {
      blink_led_on(RED);
      }
	  else{
		  if(flag==2){
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
			  if(flag==3){
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
				  if(flag==4){
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
	  }
    }
  // Infinite loop, never return.
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

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
