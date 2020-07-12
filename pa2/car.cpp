/*
 * CPSC 1070- PA2
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: car.cpp
 * Description: Implementation for car class
 */
#include "car.h"

using namespace std;

// default constructor for cars
Car::Car() {
	doors = 0;
	paymentType = "";
}

// full constructor for cars, sets doors and paymentType
Car::Car(int numberOfDoors, string paymentType) {
	doors = numberOfDoors;
	this->paymentType = paymentType;
}

int Car::getDoors() {
	return doors;
}

string Car::getPaymentType() {
	return paymentType;
}

void Car::setDoors(int numdoors) {
	doors = numdoors;
}

void Car::setPaymentType(string pt) {
	paymentType = pt;
}