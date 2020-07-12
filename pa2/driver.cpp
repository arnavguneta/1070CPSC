/*
 * CPSC 1070- PA2
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: driver.cpp
 * Description: Main driver
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "car.h"
#include "truck.h"
#include "tollbooth.h"

using namespace std;

int main(int argc, char *argv[]) {
	Car c;
	Truck t;
	string type;

	ifstream infile;
	ofstream outfile;
	ofstream totalsfile;

	// toll.txt is passed in here via command-line arg
	infile.open(argv[1]);
	// output file is passed in via command-line arg
	outfile.open(argv[2]);
	// output file for printTotals function
	totalsfile.open("dailyTotals.txt");

	// read in first arrival type
	infile >> type;

	// instantiate TollBooth (check tollbooth.cpp for note on extra param)
	TollBooth tb("Clemson TollBooth", outfile);

	// checks the type and creates proper objects
	while(!infile.eof()) {
		if(type == "car") {
			int doors;
			string paymentType;

			infile >> doors >> paymentType;

			// if type is car, sets up car object using values 
			// read in via infile
			c.setDoors(doors);
			c.setPaymentType(paymentType);
			tb.arrive(c, outfile);
		} else if (type == "truck") {
			int axles;
			double weight;
			string paymentType;

			infile >> axles >> weight >> paymentType;

			// if type is truck, sets up truck object using values 
			// read in via infile			
			t.setAxles(axles);
			t.setWeight(weight);
			t.setPaymentType(paymentType);
			tb.arrive(t, outfile);
		} else {
			return 1;
		}
		infile >> type;
	}

	// to match out.txt
	tb.printTotals(outfile);
	// prints again to dailyTotals.txt as specified in reqs
	tb.printTotals(totalsfile);

	infile.close();
	outfile.close();
	totalsfile.close();

	return 0;
}