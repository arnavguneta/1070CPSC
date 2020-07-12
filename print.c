/* Fall 2018, cpsc 1070, PA1
	Arnav Guneta, aguneta
   	CpSc 1070-001
	10/16/18
   	Programming Assignment 1
	Prints header and ppm image to file
*/ 

#include "defs.h"

/* printHeader
 * writes header information to file provided by the redirection of output
 * @param dim: header structure used for necesarry printing values
 * @param format[2]: format for the header structure "P6", "P5", etc
 * @param maxPix: maximum int for pixel rgb values
 */
void printHeader(header_t * dim, char format[2], int maxPix) {
    //image format
    fprintf(stdout, "%s ", format);

    //image size
    fprintf(stdout, "%d %d\n",dim->columns,dim->rows);

    // maximum pixel size
    fprintf(stdout, "%d\n", maxPix);

}

/* printHeader
 * writes image pixel data to file provided by the redirection of output
 * @param image: image structure used for necesarry pixel values
 */
void printImage(image_t * image) {
	// write pixel data
    fwrite(image->pixels, 3 * image->dim.columns, image->dim.rows, stdout);
}
