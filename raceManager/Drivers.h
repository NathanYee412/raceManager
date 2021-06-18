#pragma once
#include"Cars.h"


class drivers {
private:
	std::string driverFirstName;
	std::string driverLastName;
	car driverCar;
	int numWins{};
	int numLosses{};
	double bankRoll{};

public:
	void setDriverFirstName(std::string name);
	void setDriverLastName(std::string name);
	void setDriverCar(car c);
	void setBankRoll(double money);
	void bankRollTransaction(double transaction);
	void carStats();
	std::string getDriverFirstName();
	std::string getDriverLastName();
	car getDriverCar();
	int getWins();
	int getLosses();
	double getBankRoll();
	void incrementWins();
	void incrementLoses();
	
 };

/*
drivers::drivers(std::string fname, std::string lname, double bRoll) {
	driverFirstName = fname;
	driverLastName = lname;
	numWins = 0;
	numLosses = 0;
	bankRoll = bRoll;
}

~drivers::drivers() {
	std::cout << "Object has been deleted" << std::endl;
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

void drivers::setBankRoll(double money) {
	bankRoll = money;
}

void drivers::bankRollTransaction(double transaction) {
	bankRoll += transaction;
}

void drivers::carStats() {
	std::cout << "Make  : " << driverCar.getMake() << std::endl;
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

double drivers::getBankRoll() {
	return bankRoll;
}

void drivers::incrementWins() {
	numWins++;
}

void drivers::incrementLoses() {
	numLosses++;
}