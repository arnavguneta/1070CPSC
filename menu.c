/* Fall 2018, cpsc 1070, PA1
	Arnav Guneta, aguneta
   	CpSc 1070-001
	10/16/18
   	Programming Assignment 1
	Prints menu for user to see
*/ 

#include "defs.h"

/* printMenu
 * prints menu to the console and prompts user to choose a value
 * returns: the choice the user picks
 */
int printMenu() {
	int choice;

	fprintf(stderr, "\n1. original image\n");
	fprintf(stderr, "2. mirror image\n");
	fprintf(stderr, "3. upside down image\n");
	fprintf(stderr, "4. colorize purple\n\n");
	fprintf(stderr, "MENU CHOICE: ");

	fscanf(stdin, "%d", &choice);

	fprintf(stderr, "\n");
	return choice;
}