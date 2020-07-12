/*
 * CPSC 1070- PA3
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: truck.cpp
 * Description: Implementation for truck class
 */
#include "truck.h"

using namespace std;

// default constructor for trucks using initialization lists
Truck::Truck(): Vehicle("", 0, "", "", ""), axles(0), weight(0) {

}

// full constructor for trucks using initialization lists
Truck::Truck(string id, int year, string make, string model, string color, 
		int axles, double grossWt): Vehicle(id, year, make, model, color),
		axles(axles), weight(grossWt) {

}

// constructor for trucks using an input file for data
Truck::Truck(ifstream &infile): Vehicle(infile) {
	infile >> axles >> weight;
}

Truck::~Truck() {

}

int Truck::getAxles() {
	return axles;
}

double Truck::getWeight() {
	return weight;
}

void Truck::setAxles(int ax) {
	axles = ax;
}

void Truck::setWeight(double wt) {
	weight = wt;
}

/* printInfo
 * prints truck information, uses base class function
 */
void Truck::printInfo() {
	Vehicle::printInfo();
	cout << left << setw(7) << "axles:" << axles << endl;
	cout << left << setw(7) << "weight: " << weight << endl;
}
