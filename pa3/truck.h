#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Truck : public Vehicle {
  public:
   Truck();
   Truck(ifstream &infile);
   Truck(string id, int year, string make, string model, string color,
          int axles, double grossWt);
   ~Truck();
   int getAxles();
   double getWeight();
   void setAxles(int ax);
   void setWeight(double wt);
   void printInfo();

  private:
   int axles;
   double weight;

};

#endif
