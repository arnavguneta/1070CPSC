#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

// structure types defined here:
typedef struct {
	int rows, columns;
} header_t;

typedef struct {
	unsigned char r, g, b;
} pixel_t;

typedef struct {
	header_t dim;
	pixel_t * pixels;
} image_t;

// prototypes here:
void parseHeader(FILE * inFile, header_t * hptr);
void parseImage(FILE * inputFile, image_t * image);
void printHeader(header_t * dim, char format[2], int maxPix);
void printImage(image_t * image);
void mirror(image_t * image);
void flipHoriz(image_t * image);
void makePurple(image_t * image);
int printMenu();

#endif
