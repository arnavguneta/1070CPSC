/* Fall 2018, cpsc 1070, PA1
	Arnav Guneta, aguneta
   	CpSc 1070-001
	10/16/18
   	Programming Assignment 1
	Logic used to make the image purple
*/ 

#include "defs.h"

/* makePurple
 * grayscales the image and adds a purple tint
 * @param image: image that is being manipulated
 */
void makePurple(image_t * image) {
	int average = 0;
	printHeader(&(image->dim), "P6", 255);

	// get average for every pixel in the row
    for (int i = 0; i < image->dim.rows * image->dim.columns; i++) {
    	//0.299 * R + 0.587 * G + 0.114 * B
        average = ((image->pixels[i].r) + (image->pixels[i].g)
         + (image->pixels[i].b))/3;
        // prevents overflow from 255 to 0
        if (average < 225)
        	fprintf(stdout, "%c%c%c", average + 15, average, average + 30);
        else 
        	fprintf(stdout, "%c%c%c", average, average, average);
    }
}