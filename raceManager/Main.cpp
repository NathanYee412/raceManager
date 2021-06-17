#include<iostream>
#include"Drivers.h"
#include"Cars.h"

/*
	To-Do List: 
	- Create menu where you can load a saved game 
		- create character
		- save status 
		- race
		- upgrade car
		- do maintenance
	- use coded linked list for maintenance history
	- have vehicle selection with car prices that user can choose from 
	- see available races
		- have trasportation costs 
	- upgrade / parts costs
	- skill points; increase reaction time
		- gain skill points by going to practice
		- cost money to go to practice
	- game over if out of money or go negative

	Optional:
	- have race team costs affect strategy
		- team member salary come out of budget
		- food costs
	- leaderboards 
	- create upgraded parts for each car with a mapped price
*/

drivers createCharacter() {
	system("CLS");
	std::cout << "CHARACTER CREATION" << std::endl;
	drivers mainCharacter;
	
	// declare variables for driver
	std::string firstName = "";
	std::string lastName = "";
	int wins = 0;
	int losses = 0;

	std::cout << std::endl << "Enter your first name: ";
	std::cin >> firstName;

	std::cout << "Enter your last name: ";
	std::cin >> lastName;

	mainCharacter.setDriverFirstName(firstName);
	mainCharacter.setDriverLastName(lastName);
	

	return mainCharacter;
}


int main() {


	bool exit = false;
	int choice = 0;

	// main window loop 
	while (exit == false) {
		std::cout << "Select an Option: " << std::endl;
		std::cout << "(1) Create your Character" << std::endl;
		std::cout << "(2) Exit" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case(1):
			createCharacter();
			break;
		case(2):
			exit = true;
			break;
		default:
			break;
		}
	}



	

	system("pause");
	return 0;
}