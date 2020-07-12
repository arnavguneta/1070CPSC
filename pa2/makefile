compile: driver.cpp car.cpp truck.cpp tollbooth.cpp
	g++ -Wall -o tollbooth driver.cpp car.cpp truck.cpp tollbooth.cpp
run: compile
	./tollbooth toll.txt paymentsDue.txt
clean:
	rm tollbooth
	rm paymentsDue.txt
	rm dailyTotals.txt
