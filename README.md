# Wiper Contol System
Wiper is an essential component that used to wipe the raindrops or any water from the windscreen. Wipers are designed and made to clear the water from a windscreen. Most of cars have two wipers on the windscreen, one on the rear window and the other on each headlight.

In this proect we will build manually controlled wiper control system. We built a wiper control system using STM32F4 Discovery board. Here we use builtin button and LEDs to operate or visualize the project.We will control onboard four LEDs of STM32F4 discovery board with a push button.

![block diaram](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/0_Abstract/control_system.png)

### The working of motor is visualised via LEDs in STM32F4 - Discovery board

## Folder Structure
| Folder | Discription |
| :---: | :---: | 
| 0_Absract | Brief info aout project
| 1_Requirements	| Documents detailing requirements and research
| 2_Design	| Documents specifying design details
| 3_Implementation |	All code, neccesary files and documentation
| 4_TestPlanAndOutput | All the test files and 
| 6_ImagesAndvedios | Contains output and media files

## In Action
|ON|OFF|
|:--:|:--:|
|![ON](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/ON_state.gif)|![OFF](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/OFF_state.gif)|

## Working Scenario
|Key Press - 1 (Wiper power Lvl-1)|Key Press - 2 (Wiper power Lvl-2)|Key Press - 3 (Wiper power Lvl-3)|
|:--:|:--:|:--:|
|![press1](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/lvl_1.gif)|![press2](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/lvl_2.gif)|![press3](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/lvl_3.gif)|

|Key Press and Hold - __ON/OFF__|Key Press - 4 (Wiper off)|Key Press - 5(repeat from Wiper power level-1)|
|:--:|:--:|:--:|
| ![press hold](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/pess_hold_on.gif) | ![press4](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/press4.gif) | ![press 5](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_ImagesAndVideos/pess5.gif) |

## CI and Code Quality

| Complile | Cppcheck | Codacy | Build CI | Git_Inspector
|:--:|:--:|:--:|:--:|:--:|
| [![Compile-Linux](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/Compile_Linux.yml/badge.svg)](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/Compile_Linux.yml) | [![Cppcheck](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/cpp_check.yml/badge.svg)](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/cpp_check.yml) | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/f193abc49810470fa576f3d0189c6325)](https://www.codacy.com/gh/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Lokesh12121/M3_Wiper_Conytol_System_stm32f4&amp;utm_campaign=Badge_Grade) | [![Build_CI - Linux](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/Build_CI_Linux.yml/badge.svg)](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/Build_CI_Linux.yml) [![Bulid CI - windows](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/Build_CI_WIn.yml/badge.svg)](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/Build_CI_WIn.yml) | [![Git Inspector](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/actions/workflows/gitinspector.yml) |

