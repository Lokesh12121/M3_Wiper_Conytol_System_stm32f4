## All the build, main file, essential files are in this folder

## Folder Structure
| Folder | Discription |
| :---: | :---: | 
| build | All the extension files
| documentation	| Automated documentation by Doxygen
| inc	| All the header files
| src |	All the .c files for multiprogramming
| test | Test program and test results
| Makefile | Makefile for running chevking and testing
| proect_main.c | Project main file
| simulation | Contains all the circuit files and media

## How it works 
1.  Download the respository to local machine
2.  In the powershell go to the __3_Implementation__ directory 
3.  Type __make all__ in powershell
4.  A __Build__ file is generated (all the .hex and .elf files are generated and stored here ) used for dumping in MCU for simulation
