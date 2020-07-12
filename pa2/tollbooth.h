#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h> 
#include "car.h"
#include "truck.h"

using namespace std;

class TollBooth {
  public:
    TollBooth(string id, ofstream &out);
    string getID();
    double getTotalToll();
    void arrive(Car c, ofstream &out);
    void arrive(Truck t, ofstream &out);
    void printTotals(ofstream &out);

 private:
   string id;
   int carCount;
   int truckCount;
   double totalToll;
   int cashCount;
   int cardCount;

};

#endif