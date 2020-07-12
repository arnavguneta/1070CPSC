#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Vehicle {
  private:
  /*Each of these data items represent something any type of vehicle will have
   *so it makes sense these would be in the base class.*/
   string id;
   int year;
   string make;
   string model;
   string color;

  public:
   Vehicle();
   Vehicle(ifstream &infile);
   Vehicle(string id, int year, string make, string model, string color);
   virtual ~Vehicle();
   string getID();
   void setID(string id);
   virtual void printInfo();

};

#endif
