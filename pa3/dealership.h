#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include "vehicle.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Dealership {
  public:
    Dealership();
    Dealership(string id);
    virtual ~Dealership();

    string getID();
    void setID(string id);

    virtual void printInventory();
    int inventoryCount();
    void addVehicle(Vehicle *v);

 private:
   string id;
   //list<Vehicle *> inventory;
   vector<Vehicle *> inventory;
   //list<Vehicle *>::iterator iter;
   vector<Vehicle *>::iterator iter;
};

#endif
