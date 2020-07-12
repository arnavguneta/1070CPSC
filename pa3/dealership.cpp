/*
 * CPSC 1070- PA3
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: dealership.cpp
 * Description: Implementation for dealership class
 */
#include "dealership.h"

using namespace std;

// default constructor for dealership using initilization lists
Dealership::Dealership(): id(0) {

}

// full constructor for dealership using initilization lists
Dealership::Dealership(string id): id(id) {

}

Dealership::~Dealership() {

}

string Dealership::getID() {
	return id;
}

void Dealership::setID(string id) {
	this->id = id;
}

int Dealership::inventoryCount() {
	return inventory.size();
}

/* printInfo
 * prints the inventory vector using its iterator
 */
void Dealership::printInventory() {
	for(iter = inventory.begin(); iter != inventory.end(); iter++) {
		(*iter)->printInfo();
		cout << endl;
	}
}

/* addVehicle
 * adds vehicles to the inventory vector
 * @param v: vehicle requested to be added to the inventory vector
 */
void Dealership::addVehicle(Vehicle *v) {
	inventory.push_back(v);
}