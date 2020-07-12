/*
 * CPSC 1070- PA3
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: car.cpp
 * Description: Implementation for car class
 */
#include "car.h"

using namespace std;

// default constructor for cars using initialization lists
Car::Car(): Vehicle("", 0, "", "", ""), doors(0) {

}

// full constructor for cars using initialization lists
Car::Car(string id, int year, string make, string model, string color, 
		int numberOfDoors): Vehicle(id, year, make, model, color),
		doors(numberOfDoors) {

}

// constructor for cars using an input file for data
Car::Car(ifstream &infile): Vehicle(infile) {
	infile >> doors;
}

Car::~Car() {

}

int Car::getDoors() {
	return doors;
}

void Car::setDoors(int numdoors) {
	doors = numdoors;
}

/* printInfo
 * prints car information, uses base class function
 */
void Car::printInfo() {
	Vehicle::printInfo();
	cout << left << setw(7) << "doors:" << doors << endl;
}
