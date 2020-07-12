/* Fall 2018, cpsc 1070, PA1
	Arnav Guneta, aguneta
   	CpSc 1070-001
	10/16/18
   	Programming Assignment 1
	The main file
*/ 

#include "defs.h"

int main(int argc, char * argv[]) {
	header_t header;
	image_t theImage;
	
	FILE *inFile;
	header_t *hptr = &header;

	if (argc != 2) {
		fprintf(stderr, "%s", "Incorrect amount of arguments. Try again.");
		return 1;
	}
	
	// opens file and makes sure it is not null
	inFile = fopen(argv[1], "r");
	assert(inFile != NULL);
	
	// call the parseHeader function
	parseHeader(inFile, hptr);

	// allocates space for the image
	image_t *iptr = (image_t *) malloc(sizeof(image_t));
	iptr = &theImage;

	// allocates memory for the data of the image and checks if it was 
	// properly assigned
	theImage.pixels = (pixel_t *) malloc(header.rows * header.columns * 
		sizeof(pixel_t));

	if (theImage.pixels == NULL || iptr == NULL) {
		fprintf(stderr, "%s", "Failed to allocate memory for image.");
		return 1;
	}
	
	// add header info to image structure
	iptr->dim = header;

	// parses image data
	parseImage(inFile, iptr);

	fclose(inFile);

	int choice = printMenu();
	switch (choice) {
		// original image
		case 1:
			break;
		// mirror image
		case 2:
			mirror(iptr);
			break;
		// upside down image
		case 3:
			flipHoriz(iptr);
			break;
		// colorize purple
		case 4:
			makePurple(iptr);
			break;
		default:
			fprintf(stderr, "Incorrect option, exiting program . . .\n\n");
			break;
	}

	// prints image info to file, only exec on case 1 2 3
	if (choice < 4 && choice > 0) {
		printHeader(&header, "P6", 255);
		printImage(iptr);
	}
	return 0;
}

