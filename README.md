## CPSC 1070 - Programming Methodology
### Programming Assignment 1
### Arnav Guneta

#### Description
a program that manipulates a ppm image in the following ways: mirror image (rotated
along a vertical axis); upside down image (rotated along a horizontal axis); and a gray scale image with a slightly purple tint.

#### Purpose
The project allowed me to practice with multi-module programs and makefiles, header files, using file
pointers, and command-line arguments as well as redirection.

#### File details
menu.c - contains the printMenu() function, which will present the menu to the user and return the chosen value
parse.c - contains the parseHeader() and parseImage() functions
print.c – contains the printHeader() and printImage() functions
mirror.c - contains the mirror() function
flipHoriz.c - contains the flipHoriz() function
purple.c - contains the makePurple() function

#### Usage
transform tiger.ppm > img.ppm
1. original image
2. mirror image
3. upside down image
4. colorize purple
MENU CHOICE: (choose any to manipulate tiger.ppm file)

