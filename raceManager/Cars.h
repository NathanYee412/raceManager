#pragma once
#include<vector>



class car {
private:
	std::string make;
	std::string model;
	int milage{};
	int hp{};
	bool needsMaintenance{};
	std::vector<int> maintenanceHistory;
	double qtrMileTime{};
	double carValue{};


public:
	void setMake(std::string make);
	void setModel(std::string model);
	void setMilage(int milage);
	void setMaintenance();
	void setHp(int h);
	void setQtrMileTime(double q);
	void setCarValue(double v);
	int getMilage();
	std::string getModel();
	std::string getMake();
	bool needMaintenance();
	int getHp();
	double getQtrMileTime();
	double getCarValue();
};

// default constructor setting all variables to 0 or ""
car::car() {
	make = "";
	model = "";
	milage = 0;
	hp = 0;
	needsMaintenance = false;
	qtrMileTime = 0.00;
	carValue = 0.00;
}

void car::setMake(std::string m) {
	make = m;
}

void car::setModel(std::string m) {
	model = m;
}

void car::setMilage(int m) {
	milage = m;
}

void car::setMaintenance() {
	maintenanceHistory.push_back(milage);
}

void car::setHp(int h) {
	hp = h;
}

void car::setQtrMileTime(double q) {
	qtrMileTime = q;
}

double car::getQtrMileTime() {
	return qtrMileTime;
}

void car::setCarValue(double v) {
	carValue = v;
}

double car::getCarValue() {
	return carValue;
}
int car::getHp() {
	
	// if car needs maintenance return a lower horsepower amount
	if (needMaintenance()) {
		return hp - 20;
	}
	else {
		return hp;
	}
}

int car::getMilage() {
	return milage;
}

std::string car::getModel() {
	return model;
}

std::string car::getMake() {
	return make;
}

bool car::needMaintenance() {
	
	// get miles driven after last maintenance
	int milesSinceLastMaintenance = milage - maintenanceHistory[maintenanceHistory.size() - 1];
	if (milesSinceLastMaintenance > 3000) {
		return true;
	}
	else {
		return false;
	}
}