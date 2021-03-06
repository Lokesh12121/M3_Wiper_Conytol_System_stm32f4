# Wiper Control System
## Abstract

Wiper is an essential component that used to wipe the raindrops or any water from the windscreen. Wipers are designed and made to clear the water from a windscreen. Most of cars have two wipers on the windscreen, one on the rear window and the other on each headlight. The wiper parts visible from outside the car are the rubber blade, the wiper arm holding the blade, a spring linkage, and parts of the wiper pivots.

In this proect we will build manually controlled wiper control system. We built a wiper control system using STM32F4 Discovery board. Here we use builtin button and LEDs to operate or visualize the project.We will control onboard four LEDs of STM32F4 discovery board with a push button. 

## Block Diagram

![control system](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/0_Abstract/control_system.png)

### The working of motor is visualized in terms of LED action in STM32F4 - Discovery

## Components, Packages and Software required
-   [STM32F4 - Discovery](https://pdf1.alldatasheet.com/datasheet-pdf/view/435284/STMICROELECTRONICS/STM32F4DISCOVERY.html) - Allow users to develop audio applications easily. It includes an ST-LINK/V2-A embedded debug tool, one ST-MEMS digital accelerometer, one digital microphone, one audio DAC with integrated class D speaker driver, LEDs, push-buttons, and a USB OTG Micro-AB connector.Specialized add-on boards can be connected by means of the extension header connectors.
-   [STM32 Cube IDE](https://www.st.com/en/development-tools/stm32cubeide.html) -  STM32CubeIDE is an all-in-one multi-OS development tool, which is part of the STM32Cube software ecosystem. STM32CubeIde Board PhotoSTM32CubeIDE is an advanced C/C++ development platform with peripheral configuration, code generation, code compilation, and debug features for STM32 microcontrollers and microprocessors. 
-   [VS Code](https://code.visualstudio.com/) - Visual Studio Code is a code editor redefined and optimized for building and debugging modern web and cloud applications
-   [LED]() - A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it
-   [Button]() - A push-button (also spelled pushbutton) or simply button is a simple switch mechanism to control some aspect of a machine or a process
-   [Eclipse Embedded CDT](https://projects.eclipse.org/projects/iot.embed-cdt) - It is a plug-ins allow to create, build, debug and in general to manage Arm & RISC-V projects (executables and static/shared libraries, in both 32 and 64-bit versions) with the Eclipse IDE.
-   [xPack Qemu](https://xpack.github.io/qemu-arm/#benefits) - xPack QEMU Arm is a fork of the public open-source QEMU project, customised for more support of Cortex-M cores, and a better integration with the GNU Arm QEMU Debugging plug-in.
-   [xPack OpenOCD](https://xpack.github.io/openocd/#:~:text=The%20xPack%20OpenOCD%20is%20a,code%20available%20from%20the%20repository.) - It is a cross-platform binary distribution of OpenOCD, the Open On-Chip Debugger, an open source project hosted on  SourceForge.
-   [xPack Windoes Build Tool](https://xpack.github.io/windows-build-tools/) -  It is a Windows specific package, customised for the requirements of the Eclipse CDT managed build projects. It includes a recent version of GNU make and a recent version of BusyBox, which provides a convenient implementation for sh/rm/echo.

## Features
-   __Feature-1(System ON):__ The wiper control system becomes active on ___Hold of Button___ or 2 seconds and ___Red LED___ will ___ON___ indicating system is ON.
-   __feature-2(3-Control Levels):__ The system has 3 power levels (i.e, speed of motor in real world), we use (1, 4, 8)Hz as freuency levels used to visualize via LED.
    * When the system ___key press-1___(i.e, the push button is pressed once) the Blue, Green and Orange LED's come ON one at a time with the set frequency of 1Hz
    * When the system ___key press-2___(i.e, the push button is pressed twice) the Blue, Green and Orange LED's come ON one at a time with the set frequency of 4Hz
    * When the system ___key press-3___(i.e, the push button is pressed thrice) the Blue, Green and Orange LED's come ON one at a time with the set frequency of 8Hz
-   __Feature-3(Control Off):__ On key ___press-4___ the system is ON(LED-RED-ON), on press again the system goes back to ___step-2___
-   __Feature-4(System OFF):__ The wiper control system becomes inactive on ___Hold of Button___ or 2 seconds and Red LED will OFF indicating system is OFF.

### The working of motor is visualized in terms of LED action in STM32F4 - Discovery

## Flow chart

![Flow Chart](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/0_Abstract/flow%20chart_1.png)

## How the project works
1.  __Ignition Key Position at ACC:__ The Red LED is ON, if the user button is pressed and held for 2 secs
2.  __Wiper ON:__ On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz
3.  __Wiper OFF:__ The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
4.  __Ignition Key Position at Lock:__ The Red LED is OFF, if the user button is pressed and held for 2 secs


# Final Results

## Working Scenario
|Key Press - 1 (Wiper power Lvl-1)|Key Press - 2 (Wiper power Lvl-2)|Key Press - 3 (Wiper power Lvl-3)|
|:--:|:--:|:--:|
|![press1](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_1.gif)|![press2](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_2.gif)|![press3](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/lvl_3.gif)|

|Key Press and Hold - __ON/OFF__|Key Press - 4 (Wiper off)|Key Press - 5(repeat from Wiper power level-1)|
|:--:|:--:|:--:|
| ![press hold](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/pess_hold_on.gif) | ![press4](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/press4.gif) | ![press 5](https://github.com/Lokesh12121/M3_Wiper_Conytol_System_stm32f4/blob/main/6_Output/pess5.gif) |

## Test Cases

| Test ID | Description | Input | Expected output | Actual Output | Test Type |
| --- | --- | --- | --- | --- | --- |
| 01 | Ignition ON | User Button Press and hold for 2sec | Red LED ON | Red LED ON | Scenario indicating System ON |
| 02 | Viper ON | User Button Press Button 1st tme  | Blue, Green, Orange LEDs Flicker with 1Hz | Blue, Green, Orange LEDs Flicker with 1Hz  | Scenario-Wiper power level-1 |
| 03 | Viper ON | User Button Press Button 2nd time | Blue, Green, Orange LEDs Flicker with 4Hz | Blue, Green, Orange LEDs Flicker with 4Hz  | Scenario-Wiper power level-2 |
| 04 | Viper ON | User Button Press Button 3rd time | Blue, Green, Orange LEDs Flicker with 8Hz | Blue, Green, Orange LEDs Flicker with 8Hz  | Scenario-Wiper power level-3 |
| 05 | Ignition OFF | User Button Press and hold for 2sec |  Red LED OFF | Red LED OFF | Scenario indicating System OFF |
