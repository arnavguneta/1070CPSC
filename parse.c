/* Fall 2018, cpsc 1070, PA1
	Arnav Guneta, aguneta
   	CpSc 1070-001
	10/16/18
   	Programming Assignment 1
	Parses header and image data
*/ 

#include "defs.h"

/* parseHeader
 * reads in header information from the given file and sets up dimensions
 * @param inputFile: file used to read values from
 * @param dimensions: header structure that stores header values
 */
void parseHeader(FILE * inputFile, header_t * dimensions) {
	// for the P6 image format
	char format[2];  
	// for the maximum pixel value of 255
	int maxPix;      

	// sets rows and cols to 0
	dimensions->rows = 0;
	dimensions->columns = 0;
	
	// reads in type columns rows and pixel size respectively
	fscanf(inputFile, "%s %d %d %d", format, &(*dimensions).columns, 
		&(*dimensions).rows, &maxPix);
}

/* parseImage
 * reads in image information from the given file and sets up image data
 * @param inputFile: file used to read values from
 * @param image: image structure that stores pixel values
 */
void parseImage(FILE * inputFile, image_t * image) {
	while (fgetc(inputFile) != '\n') ;
	// reads in all data with fail safe
	if (fread(image->pixels, 3 * image->dim.columns, image->dim.rows, 
		inputFile) != image->dim.rows) {
		fprintf(stderr, "Error loading image\n");
        exit(1);
    }	
}



 

	
