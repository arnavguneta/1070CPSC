/* Fall 2018, cpsc 1070, PA1
	Arnav Guneta, aguneta
   	CpSc 1070-001
	10/16/18
   	Programming Assignment 1
	Logic used to mirror image
*/ 

#include "defs.h"

/* mirror
 * horizontal translation of the image (around the y axis)
 * @param image: image that is being manipulated
 */
void mirror(image_t * image) {
    pixel_t temp;
    pixel_t * row;

    // for every row, switch column from front to end
    for (int y = 0; y < image->dim.rows; ++y) {
    	// obtain row
        row = image->pixels + y * image->dim.columns;
        for (int x = 0; x < image->dim.columns / 2; ++x)
        {
        	// temp variable holds the pixel to be swapped to the right
            temp = row[x];
            // the pixel to the left is now swapped to the right
            row[x] = row[image->dim.columns - 1 - x];
            // the pixel to the right is now swapped to the left
            row[image->dim.columns - 1 - x] = temp;
        }
    }
}