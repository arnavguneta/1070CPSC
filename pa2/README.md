## CPSC 1070 - Programming Methodology
### Programming Assignment 2
### Arnav Guneta

#### Description
The Department of Highways of Any County, USA, is installing a toll collection system on one of its major roads. Cars and trucks pulling up to a tollbooth are required to pay a toll. The toll for a car is calculated as $3.00 per car plus $1 per door. The toll for a truck is calculated as $5 per axle and $10 per thousand pounds of weight (round up). When each vehicle arrives, the toll due is displayed. At the end of the day (when all of the vehicles have arrived) the tollbooth will printout some important statistics from the days’ toll collections.

This program computes the toll due from each vehicle that arrives at the toll booth. This toll booth is very high tech and uses sensors to determine the information about the cars. The sensor data is saved to a file which we will read. This file is passed through the command prompt to the driver class.

#### Purpose
The purpose of this assignment was to practice defining and implementing C++ classes.

#### File details
car.h – the class definition for the car class

truck.h – the class definition for the truck class

tollbooth.h – the class definition for the tollbooth class

toll.txt – a sample data file

car.cpp – implementation for the car class

truck.cpp – implementation for the truck class

tollBooth.cpp – implementation for the tollBooth class

driver.cpp – the driver that contain the main()


#### Information about the classes:
##### Car
The Car class is characterized by the number of doors. The class should provide the following methods:

```
Car( ) – Default constructor
Car(int numberOfDoors, string paymentType) – Regular constructor
int getDoors( )
string getPaymentType()
void setDoors(int d)
void setPaymentType(string pt)
```
##### Truck
The Truck class is characterized by the number of axles and the weight. The class should provide the following methods:

```
Truck( ) – Default constructor
Truck(int numAxles, double grossWeight, string paymentType) – Regular constructor
int getAxles( )
string getPaymentType()
double getWeight( )
void setAxles(int a)
void setWeight(double w)
void setPaymentType(string pt)
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

##### main() Method:
The main( ) method in driver.cpp does the following:

```
1. Declares all necessary variables and creates all necessary objects.
2. Reads first arrival type (car or truck) from the file.
3. While there are more arrivals to be read,
a. Read the appropriate data and set their object’s field(s)
b. Use the arrive method of the TollBooth class to send the object to the TollBooth.
4. After reading the last data, the driver asks the printTotals method to print the totals for the day. It print the totals to an output file called dailyTotals.txt
```

#### Usage:
How to use the make file:
1. make run - compiles program
2. make clean - clears object files and any compiled files
