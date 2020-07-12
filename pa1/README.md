## CPSC 1070 - Programming Methodology
### Programming Assignment 1
### Arnav Guneta

#### Description
A program that manipulates a ppm image in the following ways: mirror image (rotated
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
Compile and run the mainDriver.c and perform the following command:

`
make run
`

You will be prompted with:

```
1. original image
2. mirror image
3. upside down image
4. colorize purple
MENU CHOICE: _
```
Choose your option and check img.ppm for the updated image!

#### Samples
![Image of Sample Transformations](https://github.com/arnavguneta/1070CPSC/blob/master/pa1/assets/sample.png)
