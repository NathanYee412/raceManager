#pragma once
#include<iostream>
#include"Drivers.h"
#include"Cars.h"



// Character Creation function that returns drivers object
drivers createCharacter() {
	system("CLS");
	std::cout << "CHARACTER CREATION" << std::endl;
	drivers mainCharacter;

	// declare variables for driver
	std::string firstName = "";
	std::string lastName = "";
	int wins = 0;
	int losses = 0;
	char answer = 'n';
	
	do {
		std::cout << std::endl << "Enter your first name: ";
		std::cin >> firstName;

		std::cout << "Enter your last name: ";
		std::cin >> lastName;

		mainCharacter.setDriverFirstName(firstName);
		mainCharacter.setDriverLastName(lastName);
		mainCharacter.setBankRoll(15000.00);

		system("CLS");

		// Print stats;
		std::cout << "Do these stats look correct?" << std::endl << "=====================================" << std::endl;
		std::cout << "First Name: " << mainCharacter.getDriverFirstName() << std::endl;
		std::cout << "Last Name:  " << mainCharacter.getDriverLastName() << std::endl;
		std::cout << "(Y/N): ";
		std::cin >> answer;
	} while (answer != 'y');

	system("CLS");

	return mainCharacter;
}

// Print Character stats 
void printCharacterStats(drivers d) {
	system("CLS");

	char answer = 'n';
	do {
		std::cout << "First Name: " << d.getDriverFirstName() << std::endl;
		std::cout << "Last Name : " << d.getDriverLastName() << std::endl;
		std::cout << "Car       : " << "240sx" << std::endl;
		std::cout << "Wins      : " << d.getWins() << std::endl;
		std::cout << "Losses    : " << d.getLosses() << std::endl;
		std::cout << "Money     : $" << d.getBankRoll() << std::endl << std::endl;
		std::cout << "Done Viewing? (Y/N): ";
		std::cin >> answer;


	} while (answer != 'y');

	system("CLS");
}

