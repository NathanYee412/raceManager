#pragma once
#include<iostream>
#include<fstream>
#include"Drivers.h"
#include"Cars.h"



// Character Creation function that returns drivers object
// User currently types in their user car and model
drivers createCharacter() {
	system("CLS");
	std::cout << "CHARACTER CREATION" << std::endl;
	drivers mainCharacter;

	// declare variables for driver
	std::string firstName = "";
	std::string lastName = "";
	std::string make = "";
	std::string model = "";
	int wins = 0;
	int losses = 0;
	char answer = 'n';
	
	do {
		std::cout << std::endl << "Enter your first name: ";
		std::cin >> firstName;

		std::cout << "Enter your last name: ";
		std::cin >> lastName;

		std::cout << "Enter your Car Make: ";
		std::cin >> make;
		std::cout << "Enter your Car Model: ";
		std::cin >> model;

		mainCharacter.setDriverFirstName(firstName);
		mainCharacter.setDriverLastName(lastName);
		mainCharacter.setBankRoll(15000.00);

		system("CLS");

		// Print stats;
		std::cout << "Do these stats look correct?" << std::endl << "=====================================" << std::endl;
		std::cout << "First Name: " << mainCharacter.getDriverFirstName() << std::endl;
		std::cout << "Last Name:  " << mainCharacter.getDriverLastName() << std::endl;
		std::cout << "Car Make:   " << make << std::endl;
		std::cout << "Last Name:  " << model << std::endl;
		std::cout << "(Y/N): ";
		std::cin >> answer;


		

		// set users car make and model
		car mycar;
		mycar.setMake(make);
		mycar.setModel(model);

		mainCharacter.setDriverCar(mycar);

	} while (answer != 'y');

	system("CLS");

	return mainCharacter;
}

// Print Character stats 
void printCharacterStats(drivers d) {
	system("CLS");

	// drivers current car
	car currentCar;
	currentCar = d.getDriverCar();

	// create string for getting current car make and model
	std::string myCar = currentCar.getMake() + " " + currentCar.getModel();


	char answer = 'n';
	do {
		std::cout << "First Name: " << d.getDriverFirstName() << std::endl;
		std::cout << "Last Name : " << d.getDriverLastName() << std::endl;
		std::cout << "Car       : " << myCar << std::endl;
		std::cout << "Wins      : " << d.getWins() << std::endl;
		std::cout << "Losses    : " << d.getLosses() << std::endl;
		std::cout << "Money     : $" << d.getBankRoll() << std::endl << std::endl;
		std::cout << "Done Viewing? (Y/N): ";
		std::cin >> answer;


	} while (answer != 'y');

	system("CLS");
}

// Save Character Object to "Saves.txt"
void saveCharacter(drivers character) {
	std::ofstream file;
	file.open("Saves.txt", std::ios::app);
	file.write((char*)&character, sizeof(character));
	file.close();
}

// Load Character Object from "Saves.txt"
void loadCharacter(drivers character) {
	std::ifstream file;
	file.open("Saves.txt", std::ios::in);
	file.seekg(0);
	file.read((char*)&character, sizeof(character));
	file.close();
}

// Play Game Menu
void playGameMenu(drivers character) {
	system("CLS");
	char choice;

	car currentCar = character.getDriverCar();

	std::string myCar = currentCar.getMake() + " " + currentCar.getModel();


	std::cout << "Select an Option: " << std::endl;
	std::cout << "(1) Random Race" << std::endl;
	std::cout << "(2) Upgrade current car: " << myCar << std::endl;
	
	std::cout << "Your Choice: ";
	std::cin >> choice;




}