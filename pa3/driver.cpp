/*
 * CPSC 1070- PA3
 *
 * Name: Arnav Guneta
 * Date: December 2, 2018
 * File: driver.cpp
 * Description: Implementation for main driver
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include "dealership.h"

using namespace std;

int main(int argc, char *argv[]) {
	// instantiate a Dealership object
	Dealership dealer("Clemson Auto Sales");

	Vehicle *v;
  string type;

	ifstream infile;
   // dealer.txt is passed in here via command-line arg
	infile.open(argv[1]);

	// read in type of vehicle
	infile >> type;

   //compares the type read in to determine what type of variable to create.

   while(!infile.eof()) {
      if(type == "car") {
         /*Notice the file pointer is passed to the constructor.  This is
          *because the different vehicles have different type of data that
          *will be read in (look at the car constructor)
          */
         v = new Car(infile);
         /*Notice dealer is called here to add the vehicle to the list*/
         dealer.addVehicle(v);
      }
      else if(type == "truck") {
         v = new Truck(infile);
         dealer.addVehicle(v);
      }
      else {
         cout << "\nerror\n\n";
         exit(1);
      }

      infile >> type;
   }

   cout << "inventory count = " << dealer.inventoryCount() << endl
        << endl;

   dealer.printInventory();


   return 0;

}
