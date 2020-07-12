/* Fall 2018, cpsc 1070, PA1
	Arnav Guneta, aguneta
   	CpSc 1070-001
	10/16/18
   	Programming Assignment 1
	Logic used to flip the image
*/ 

#include "defs.h"

/* flipHoriz
 * vertical translation of the image (around the x axis) 
 * @param image: image that is being manipulated
 */
void flipHoriz(image_t * image) {
	// gets the size of one line
	int size = image->dim.columns * sizeof(pixel_t);

    // place holder memory allocation
    pixel_t * temp = (pixel_t*)malloc(size);
    pixel_t * top;
    pixel_t * bottom;

    for (int i = 0; i < image->dim.rows / 2; ++i) {
        // gets the top and bottom lines
        top = image->pixels + (i * image->dim.columns);
        bottom = image->pixels + ((image->dim.rows - i - 1) *
        	image->dim.columns);
 		
 		// swaps top and bottom
        memcpy(temp, top, size);
        memcpy(top, bottom, size);
        memcpy(bottom, temp, size);
    }

}