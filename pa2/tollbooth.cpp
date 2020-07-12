/*
 * CPSC 1070- PA2
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: tollbooth.cpp
 * Description: Implementation for tollbooth class
 */
#include "tollbooth.h"

using namespace std;

/* NOTE 
 * I had to edit the given constructor for tollbooth
 * because "TOLLBOOTH SIMULATION" can't be printed
 * to the same output destination without the extra
 * ofstream parameter.
 */
// constructor for tollbooth, sets id and prints to out file
TollBooth::TollBooth(string id, ofstream &out) {
	this->id = id;
	carCount = 0;
	truckCount = 0;
	totalToll = 0.0;
	cashCount = 0;
	cardCount = 0;

	out << "TOLL BOOTH SIMULATION" << endl;
}

/* arrive
 * calculates car's balance, adds to total balance
 * increments cash/card depending on object data
 * @param c: car object read in from infile
 * @param out: file for printing output to
 */
void TollBooth::arrive(Car c, ofstream &out) {
	int carBal = 3 + c.getDoors();

	totalToll += carBal;
	carCount++;

	out << "Car " << left << setw(5) << carCount;
	out << "Amt Due: $" << carBal << endl << endl;

	if (c.getPaymentType() == "cash") {
		cashCount++;
	} else if (c.getPaymentType() == "card") {
		cardCount++;
	} else {
		return;
	}
}

/* arrive
 * calculates truck's balance, adds to total balance
 * increments cash/card depending on object data
 * @param t: truck object read in from infile
 * @param out: file for printing output to
 */
void TollBooth::arrive(Truck t, ofstream &out) {
	int truckBal = (5 * t.getAxles()) + (10 * ceil(t.getWeight() / 1000));

	totalToll += truckBal;
	truckCount++;

	out << "Truck " << left << setw(3) << truckCount;
	out << "Amt Due: $" << truckBal << endl << endl;

	if (t.getPaymentType() == "cash") {
		cashCount++;
	} else if (t.getPaymentType() == "card") {
		cardCount++;
	} else {
		return;
	}
}

/* printTotals
 * prints daily totals to an output file
 * @param out: file for printing output to
 */
void TollBooth::printTotals(ofstream &out) {
	out << "End of Day Total Tolls:" << endl;
	out << "Number of cars: " << carCount << endl;
	out << "Number of trucks: " << truckCount << endl;
	out << "Total Tolls collected: $" << totalToll << endl;
	out << "Number paid with cash: " << cashCount << endl;
	out << "Number paid with credit card: " << cardCount << endl;
}