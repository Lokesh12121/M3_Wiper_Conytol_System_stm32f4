# Wiper Control System
## Abstract

Wiper is an essential component that used to wipe the raindrops or any water from the windscreen. Wipers are designed and made to clear the water from a windscreen. Most of cars have two wipers on the windscreen, one on the rear window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper arm holding the blade, a spring linkage, and parts of the wiper pivots.

In this proect we will build manually controlled wiper control system. We built a wiper control system using STM32F4 Discovery board. Here we use builtin button and LEDs to operate or visualize the project.We will control onboard four LEDs of STM32F4 discovery board with a push button. 

## Block Diagram

![control system](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/0_Abstract/control_system.png)

### The working of motor is visualized in terms of LED action in STM32F4 - Discovery

## Features
-   __Step-1:__ The wiper control system becomes active on ___Hold of Button___ or 2 seconds and Red LED will ON indicating system is ON.
-   __Step-2:__ The system has 3 power levels (i.e, speed of motor in real world), we use (1, 4, 8)Hz as freuency levels used to visualize via LED.
    * When the system ___key press-1___(i.e, the push button is pressed once) the Blue, Green and Orange LED's come ON one at a time with the set frequency of 1Hz
    * When the system ___key press-2___(i.e, the push button is pressed twice) the Blue, Green and Orange LED's come ON one at a time with the set frequency of 4Hz
    * When the system ___key press-3___(i.e, the push button is pressed thrice) the Blue, Green and Orange LED's come ON one at a time with the set frequency of 8Hz
-   The sytem will go back to repeat step-2  when ___key press-4___ 
-   The wiper control system becomes inactive on ___Hold of Button___ or 2 seconds and Red LED will OFF indicating system is OFF.

## Controlling LEDs with Push Button STM32F4
In this project, we’ve built a wiper control system using STM32F4 Discovery board. Here we use builtin ___button___ and ___LEDs___ to operate or visualize the project.We will control onboard four LEDs of STM32F4 discovery board with a push button. As you can see in the figure shown below a blue color push button is available along with four user LEDs.

![builtin led and button](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/0_Abstract/11Capture.PNG)

## Scenario:
1.  __Ignition Key Position at ACC:__ The Red LED is ON, if the user button is pressed and held for 2 secs
2.  __Wiper ON:__ On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz
3.  __Wiper OFF:__ The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
4.  __Ignition Key Position at Lock:__ The Red LED is OFF, if the user button is pressed and held for 2 secs

## Working when ON
|Key Press - 1|Key Press - 2|Key Press - 3|
|:--:|:--:|:--:|
|![press1](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_1.gif)|![press2](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_2.gif)|![press3](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_3.gif)|


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
