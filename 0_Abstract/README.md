# Server Room Temperature Monitering System
## Abstract

Wiper is an essential component that used to wipe the raindrops or any water from the windscreen. Wipers are designed and made to clear the water from a windscreen. Most of cars have two wipers on the windscreen, one on the rear window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper arm holding the blade, a spring linkage, and parts of the wiper pivots. In this project we will build manually controlled wiper control system.

In this project, we’ve built a wiper control system using STM32F4 Discovery board. Here we use builtin button and LEDs to operate or visualize 

## Features
-   Monitor temperature of a closed room for safety measurements like it can be used in server rooms, refrigerator, microwave, closed factories etc, 
-   The system will indicate via LED wheather the doors or windows closed or not
-   The system will not turn ON until it becomes closed area
-   It is basically used for server rooms as it needs to maintain precise temperature in the room
-   An alert system can be trigerred according to user temperature.

## Components and Software required
-   [Atmega28p](https://www.arrow.com/en/products/atmega328p-pn/microchip-technology) - A single-chip microcontroller created by Atmel in the megaAVR family
-   [SimulIDE](https://www.simulide.com/p/home.html) -  A simple real time electronic circuit simulator
-   [VS Code](https://code.visualstudio.com/) - Visual Studio Code is a code editor redefined and optimized for building and debugging modern web and cloud applications
-   [LED]() - A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it
-   [Button]() - A push-button (also spelled pushbutton) or simply button is a simple switch mechanism to control some aspect of a machine or a process
-   [Resistor]() - A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element
-   [Oscilloscope]() - electronic test instrument that graphically displays varying electrical voltages as a two-dimensional plot of one or more signals as a function of time.

## How the project works
1.  The temperature sensor used in this circuit can sense a temperature ranging from 20˚ to 33˚C. Since it is not present SimulIDE, we use potentiometer it acts as an temperature sensor which is manually operated.
2.  The source code this project is available [here](https://github.com/Lokesh12121/M1_Inventary_Managment_System/tree/main/3_Implementation) , after running the code it generates a .hex and .elf file.
3.  Build the circuit according to the following diagram ![Circuit diagram](https://github.com/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/blob/main/0_Abstract/Circuit1.PNG)
4.  In the circuit door_1, door_2, window_1, window_2 are door sensors altered with push up buttons, make sure to ON all the buttons in order to keep the room closed and device to work.
5.  In simulIDE click on mcu and click on load the firmware, and select .hex file
6.  As u know the circuit only works when it is in closed space, so press all the buttons ON.
7.  And finally the circuit works, vary the potentiometer to vary the temperature
8.  The results is visualised in serial monitor via UART communication(left click on mcu on simulIDE to open serial moniter).

## Applications
1.  Server Rooms - the server rooms are closed for safety and security purpose, as it is closed it keeps warm temperature. The temperature is monitered and is controlled via coolers, fans etc, 
2.  Microwave - A kitchen device used for cooking, it is implemented over there to maintain temperature.
3.  Laboratoy - It is very important ti maintain a closed laboratory because of harmful chemicals and to maintain precise temperature
