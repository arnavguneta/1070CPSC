#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <iostream>
#include <fstream>
#include <iomanip>

class Car : public Vehicle {
  public:
   Car();
   Car(ifstream &infile);
   Car(string id, int year, string make, string model,
       string color, int numberOfDoors);
   ~Car();
   int getDoors();
   void setDoors(int numdoors);
   void printInfo();

 private:
   int doors;
};
 
#endif