## CPSC 1070 - Programming Methodology
### Programming Assignment 3
### Arnav Guneta

#### Description
Refer to the README for PA2 [READEME.md for PA2](https://github.com/arnavguneta/1070CPSC/blob/master/pa2/README.md)PA3 implements a Dealership class that keeps track of a dealer’s vehicle inventory. It reads in data from a file (using a file pointer) specified as a command-line argument.

#### Purpose
The purpose of this assignment is to give you practice defining and implementing C++ classes. This assignment is related to PA2, consisting of the Car and Truck classes, with a few modifications. There will be the addition of a Vehicle class, which will be a parent class of Car and Truck. Allowed me to implement and practice inheritance and polymorphism.

#### File details
car.h – the class definition for the car class

truck.h – the class definition for the truck class

vehicle.h – the class definition for the vehicle class

dealership.h – the class definition for the dealership class

dealer.txt – a sample data file

driver.cpp – the driver implementation file

car.cpp – implementation for the car class

truck.cpp – implementation for the truck class

vehicle.cpp – implementation for the vehicle class

dealership.cpp – implementation for the dealership class

driver.cpp – the driver that contains the main()

#### Hierarchy
![Image of Hierarchy](/assets/hierarchy.png)

#### Information about the classes
##### Dealership
The Dealership has a vector of vehicle pointers and a vector iterator.

```
Dealership( ) – Default constructor – uses initialization list
Dealership(string id) – Regular constructor – use initialization list
virtual ~Dealership( ) – There is nothing to be deconstructed
string getID( )
void setID(string id)
virtual void printInventory( ) – uses a C++ iterator to iterate through the vector of vehicles and calls
each of their printInfo().
int getInventoryCount( ) – returns the value of inventoryCount
void addVehicle(Vehicle *v) – adds a vehicle to the inventory and increments inventoryCount
```

##### Vehicle
The Vehicle class is characterized by an id, year, make, model, and color. Car and Truck objects, as derived classes, also are characterized by these as well.

```
Vehicle( ) – Default constructor – use initialization list
Vehicle(string id, int year, string make, string model,string color) – Regular
constructor – use initialization list
Vehicle(ifstream &inFile)– This parametrized constructor reads in the information specific to the vehicle
virtual void printInfo( ) – Prints the information specific to the vehicle class
virtual ~Vehicle( ) – There is nothing to be deconstructed
string getID( )
void setID(string id)
```

##### Car inherits from Vehicle
The Car class is characterized by the number of doors. The class should provide the following methods:

```
Car( ) – Default constructor – use initialization list
Car(int numberOfDoors, string paymentType) – Regular constructor – use initialization list
Car(ifstream &inFile) – This parametrized constructor reads in the information specific to the car
~Car( ) – There is nothing to be deconstructed
void printInfo( ) – Calls the vehicle’s printInfo() and also prints the information specific to the car class
int getDoors( )
void setDoors(int d)
```

##### Truck inherits from Vehicle
The Truck class is characterized by the number of axles and the weight. The class should provide the following methods:

```
Truck( ) – Default constructor – use initialization list
Truck(int numAxles, double grossWeight, string paymentType) – Regular constructor – use
initialization list
Truck(ifstream &inFile) – This parametrized constructor reads in the information specific to the truck
~Truck( ) – There is nothing to be deconstructed
void printInfo( ) – Calls the vehicle’s printInfo() and also prints the information specific to the truck class
int getAxles( )
double getWeight( )
void setAxles(int a)
void setWeight(int w)
```

##### TollBooth
The TollBooth class maintains the current toll amount, the total number of cars, the total number of trucks, total tolls collected for the day, and the number of customers that paid by cash and the number that paid by credit card. The class should provide the following methods:

```
TollBooth(string name) – prints “Toll Booth Simulation” message.
void arrive(Car aCar) – computes the toll for the car, displays the amount of the toll, and updates the total number of cars and the total tolls. Determines the type of payment.
void arrive(Truck a Truck) – computes the toll for the truck, displays the amount of the toll, and updates the total number of trucks and the total tolls. Recall that the toll for the truck is calculated as $5 per axle and $10 per thousand pounds of weight (round up). Determines the type of payment.
Prints out the following:
Truck 1 Amt Due: $65
Car 1 Amt Due: $5
Car 2 Amt Due: $5
Car 3 Amt Due: $7
Truck 2 Amt Due: $60
Truck 3 Amt Due: $230
:
:
void printTotals( ) – prints the statistic in the following format:
End of Day Total Tolls
Number of cars: 7
Number of trucks: 7
Total Tolls collected: $911
Number paid with cash: 5
Number paid with credit card: 9
```

##### main() Method
The main( ) method in driver.cpp does the following:

```
1. Declares all necessary variables and creates all necessary objects.
2. Reads first arrival type (car or truck) from the file.
3. While there are more arrivals to be read,
a. Read the appropriate data and set their object’s field(s)
b. Use the arrive method of the TollBooth class to send the object to the TollBooth.
4. After reading the last data, the driver asks the printTotals method to print the totals for the day. It print the totals to an output file called dailyTotals.txt
```

#### Usage
How to use the make file:
1. make run - compiles program
2. make clean - clears object files and any compiled files

#### Sample Output

```
inventory count = 11
id: t11345
year: 2000
make: International
model: 9500
color: Gray
weight: 52000
id: c111422
year: 2014
make: Toyota
model: Corolla
color: White
doors: 2
id: c22222
year: 2007
make: Buick
model: LaSabre
color: Red
doors: 4
id: c33355
year: 2014
make: Ford
model: Mustang
color: Black
doors: 4
id: c33784
year: 2016
make: Buick
model: LaCrosse
color: Pearl
doors: 4
id: t33444
year: 2015
make: Chevrolet
model: Silverado
color: Blue
weight: 6700
id: t44577
year: 2000
make: International
model: 9500
color: Gray
weight: 56125
id: c44223
year: 2016
make: Nissan
model: Maxima
color: Pearl
doors: 2
id: t55221
year: 2014
make: Toyota
model: Tundra
color: Platinum
weight: 6800
id: c52323
year: 2016
make: Honda
model: Accord
color: Silver
doors: 4
id: t66778
year: 2015
make: Nissan
model: Titan
color: brown
weight: 6276
```