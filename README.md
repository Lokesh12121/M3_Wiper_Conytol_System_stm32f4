# Wiper Control System
Wiper is an essential component that used to wipe the raindrops or any water from the windscreen. Wipers are designed and made to clear the water from a windscreen. Most of cars have two wipers on the windscreen, one on the rear window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper arm holding the blade, a spring linkage, and parts of the wiper pivots. 

In this proect we will build manually controlled wiper control system. We built a wiper control system using STM32F4 Discovery board. Here we use builtin button and LEDs to operate or visualize the project.We will control onboard four LEDs of STM32F4 discovery board with a push button. 

## Block Diagram

![control system](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/0_Abstract/control_system.png)
The working of motor is visualized in terms of LED action in STM32F4 - Discovery

## Folder Structure
| Folder | Discription |
| :---: | :---: | 
| 0_Absract | Brief info aout project
| 1_Requirements	| Documents detailing requirements and research
| 2_Design	| Documents specifying design details
| 3_Implementation |	All code, neccesary files and documentation
| 4_TestPlanAndOutput | All the test files and 
| 6_Output | Contains output and media files

## In Action
|ON|OFF|
|:--:|:--:|
|![ON](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/ON_state.gif)|![OFF](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/OFF_state.gif)|


## Scenario:
1.  __Ignition Key Position at ACC:__ The Red LED is ON, if the user button is pressed and held for 2 secs
2.  __Wiper ON:__ On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz
3.  __Wiper OFF:__ The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
4.  __Ignition Key Position at Lock:__ The Red LED is OFF, if the user button is pressed and held for 2 secs

## Working when ON
|Key Press - 1|Key Press - 2|Key Press - 3|
|:--:|:--:|:--:|
|![press1](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_1.gif)|![press2](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_2.gif)|![press3](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_3.gif)|

## CI and Code Quality

| Complile | Cppcheck | Codacy | Build CI | Git_Inspector
|:--:|:--:|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/actions/workflows/Compile_Linux.yml/badge.svg)](https://github.com/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/actions/workflows/Compile_Linux.yml)|[![Cppcheck](https://github.com/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/actions/workflows/cpp_check.yml/badge.svg)](https://github.com/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/actions/workflows/cpp_check.yml)| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/33358cfd83b74fe9bd50b68595aa73d4)](https://www.codacy.com/gh/Lokesh12121/M2_Room_Temperatue_Monitering_SYS/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Lokesh12121/M2_Room_Temperatue_Monitering_SYS&amp;utm_campaign=Badge_Grade) | [![Build_CI - Linux](https://github.com/Lokesh12121/M2_Server_Room_Temperatue_Monitering_SYS/actions/workflows/Build_CI_Linux.yml/badge.svg)](https://github.com/Lokesh12121/M2_Server_Room_Temperatue_Monitering_SYS/actions/workflows/Build_CI_Linux.yml) [![Bulid CI - windows](https://github.com/Lokesh12121/M2_Server_Room_Temperatue_Monitering_SYS/actions/workflows/Build_CI_WIn.yml/badge.svg)](https://github.com/Lokesh12121/M2_Server_Room_Temperatue_Monitering_SYS/actions/workflows/Build_CI_WIn.yml) | [![Git Inspector](https://github.com/Lokesh12121/M2_Server_Room_Temperatue_Monitering_SYS/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Lokesh12121/M2_Server_Room_Temperatue_Monitering_SYS/actions/workflows/gitinspector.yml)
