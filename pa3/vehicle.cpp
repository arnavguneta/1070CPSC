/*
 * CPSC 1070- PA3
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: vehicle.cpp
 * Description: Implementation for vehicle class
 */
#include "vehicle.h"

using namespace std;

// default constructor for vehicles using initialization lists
Vehicle::Vehicle(): id(""),year(0000), make(""), model(""), color("") {

} 

// full constructor for vehicles using initialization lists
Vehicle::Vehicle(string id, int year, string make, string model, string color):
	id(id),year(year), make(make), model(model), color(color) {
	
} 

// constructor for vehicles using an input file for data
Vehicle::Vehicle(ifstream &infile) {
	infile >> id >> year >> make >> model >> color;
} 

Vehicle::~Vehicle() {

}

string Vehicle::getID() {
	return id;
}

void Vehicle::setID(string id) {
	this->id = id;
}

/* printInfo
 * prints vehicle information, used by derived classes
 */
void Vehicle::printInfo() {
	cout << left << setw(7) << "id:" << id << endl;
	cout << left << setw(7) << "year:" << year << endl;
	cout << left << setw(7) << "make:" << make << endl;
	cout << left << setw(7) << "model:" << model << endl;
	cout << left << setw(7) << "color:" << color << endl;
}

