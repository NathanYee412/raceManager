#pragma once
#include"Cars.h"


class drivers {
private:
	std::string driverFirstName;
	std::string driverLastName;
	car driverCar;
	int numWins{};
	int numLosses{};

public:
	void setDriverFirstName(std::string name);
	void setDriverLastName(std::string name);
	void setDriverCar(car c);
	std::string getDriverFirstName();
	std::string getDriverLastName();
	car getDriverCar();
	int getWins();
	int getLosses();
	void incrementWins();
	void incrementLoses();
	
 };

/*
drivers::drivers() {
	driverFirstName = "";
	driverLastName = "";
	numWins = 0;
	numLosses = 0;
}
*/
void drivers::setDriverFirstName(std::string name) {
	driverFirstName = name;
}

void drivers::setDriverLastName(std::string lname) {
	driverLastName = lname;
}

void drivers::setDriverCar(car c) {
	driverCar = c;
}


std::string drivers::getDriverFirstName() {
	return driverFirstName;
}

std::string drivers::getDriverLastName() {
	return driverLastName;
}

car drivers::getDriverCar() {
	return driverCar;
}

int drivers::getWins() {
	return numWins;
}

int drivers::getLosses() {
	return numLosses;
}

void drivers::incrementWins() {
	numWins++;
}

void drivers::incrementLoses() {
	numLosses++;
}