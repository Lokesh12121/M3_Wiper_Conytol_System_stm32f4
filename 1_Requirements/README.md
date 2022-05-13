# Requirements

## 1. Requirements
### High Level Requirements
| High Level Requirements  | Description |
| ------------- | ------------- |
| HLR1  | Microcontroller - STM32F4 discovery board |
| HLR2  | Push button |
| HLR3  | LED |
| HLR4  | Software for simulation |

### Low Level Requirements
| Low Level Requirements	  | Description |
| ------------- | ------------- |
| HLR1_LLR1 | STM32F4 discovery  |
| HLR2_LLR2 | PA0 digital pin |
| HLR2_LLR3 | Pull-down resistor/ Pull-up resistor  |
| HLR3_LLR4 | I/O PD12, PD13, PD14, PD15 on STM32F407VGT6 |
| HLR4_LLR5 | xPack - Qemu, xPack - Windows Build Tool, Pack - OpenOCD  |
| HLR5_LLR6 | avr gcc  |
| HLR5_LLR7 | STM32 Cube IDE  |

## 2. What, Why, When, Who, How ( 4W1H )
### 4W
| __What__ | __Why__ |
| ----------- | ----------- |
| A wiper speed control system for an wiper controls the operational speed of a wiper in accordance with rain conditions. The control system includes a push button and LED's to control the flickering speed (wiper speed). | To reduce driving distractions and allow drivers to focus on main task of driving. The distraction eliminated with the development of this system is the manual adjustment of wipers when driving in precipitation. |
| __When__  | __Who__ |
| Wiper is an essential component that used to wipe raindrops or any water from the vehicle’s windscreen. The system used to activate the wiper manually and the process of pulling up the wiper is difficult to be handled. Thus, this system is proposed to solve these problems | For all LMV and HMV needs this system. The wiper serves to clean the windshield of the car at the front and rear, although not all cars have wipers on the rear side. Wiper works by removing oil, dust, rainwater, and dirt that get stuck to the windshield |

### 1H
|__How__|
| ----- |
|With the use of push button we can control the whole system, and use the wiper to control to wipe the windshield |

 :+1: **Pros :**  Simple, easy to maintain and manage. 
 
 :-1: **Cons :**  It is not automated using any rain sensors
 
### 3. SWOT Analysis
![SWOT Analysis](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/1_Requirements/swot.PNG)
  
### 4. Implementation Block Diagram 
![Design Flow](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/0_Abstract/control_system.png)

### The working of motor is visualised via LED's in STM32F4 Discovey Board

## Tools : MS Word, MS Excel and Snipping tool
