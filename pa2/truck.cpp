/*
 * CPSC 1070- PA2
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: truck.cpp
 * Description: Implementation for truck class
 */
#include "truck.h"

using namespace std;

// default constructor for trucks
Truck::Truck() {
	axles = 0;
	weight = 0.0;
	paymentType = "";
}

// full constructor for trucks, sets axles weight and paymentType
Truck::Truck(int axles, double grossWt, string paymentType) {
	this->axles = axles;
	weight = grossWt;
	this->paymentType = paymentType;
}

int Truck::getAxles() {
	return axles;
}

double Truck::getWeight() {
	return weight;
}

string Truck::getPaymentType() {
	return paymentType;
}

void Truck::setAxles(int ax) {
	axles = ax;
}

void Truck::setWeight(double wt) {
	weight = wt;
}

void Truck::setPaymentType(string pt) {
	paymentType = pt;
}