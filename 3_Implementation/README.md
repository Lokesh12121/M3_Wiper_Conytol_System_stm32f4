## All the build, main file, essential files are in this folder
### The subfolders are created by STM32 Cube IDE, so the makefile is in Debug folder
### To Make
[In Linux]()
command: make -C Debug/ all
### To Run output generated file
[In Linux]()
command: qemu-system-gnuarmeclipse.exe -M STM32F4-Discovery -image Debug/Blinky.elf
## Folder Structure
| Folder | Discription |
| :---: | :---: | 
| Debug | All the output generated files
| documentation	| Automated documentation by Doxygen
| include	| All the header files
| src |	All the .c files and main project file
| test | Test program and test results
| Makefile | Makefile for running chevking and testing
| src/main.c | Project main file

## How it works 
1.  Download the respository to local machine
2.  In the powershell go to the __3_Implementation/Debug/__ directory 
3.  Type __make all__ in linux terminal
4.  A __Debug/__ all the output files are generated (all the .hex and .elf files are generated and stored here ) used for flashing in MCU for simulation
