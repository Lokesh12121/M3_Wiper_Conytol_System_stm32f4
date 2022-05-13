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
| HLR2_LLR2 | Pull-down resistor/ Pull-up resistor  |
| HLR3_LLR3 | I/O PD12, PD13, PD14, PD15 on STM32F407VGT6 |
| HLR4_LLR4 | xPack - Qemu, xPack - Windows Build Tool, Pack - OpenOCD  |
| HLR5_LLR4 | avr gcc  |
| HLR5_LLR4 | STM32 Cube IDE  |

## 2. What, Why, When, Who, How ( 4W1H )
### 4W
|   |   |
| ----------- | ----------- |
| What | Why |
| In Monitoring Temperature and humidity for Server Room is a system, which provides information while regulating temperature and humidity inside the server room. There are various types of sensors in the prototype, using all parameters of temperature and humidity that can be measured. This system can be used to monitor the temperature or humidity of a particular room or place. | The computer rooms contain servers and data of very high value. The normal temperature in a server room should be between 21 and 25°C. The American Society of Heating, Refrigerating and Air-Conditioning Engineers (ASHRAE) recommends a temperature between 18°C and 27°C. In fact, going from 20°C to 27°C reduces eclectic consumption by 4% |
| When | Who |
| The apllication can be used to make improved safety in server rooms, better reporting and forecasting data continously. | It can be used for any server rooms, datacentor platorm either it can be pharma store( since it contains flamables ), retail shop, personal inventory etc. to monitor the temperature |

### 1H
| How |
| ----- |
|With the use of simple interface with the screen, the person can visualize data. |

 :+1: **Pros :**  Simple, easy to maintain and manage. 
 
 :-1: **Cons :**  To maintain accurate temperature
 
### 3. SWOT Analysis
![SWOT Analysis](https://github.com/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/blob/main/1_Requirements/swot.PNG)
  
### 4. Implementation Block Diagram 
![Design Flow](https://github.com/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/blob/main/1_Requirements/block_diagram.PNG)

## Tools : MS Word, MS Excel and Snipping tool
