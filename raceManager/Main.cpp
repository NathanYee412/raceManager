#include<iostream>
#include"Drivers.h"
#include"Cars.h"
#include"Menu.h"
/*
	To-Do List: 
	- Create menu where you can load a saved game 
	x	- create character
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


int main() {


	bool exit = false;
	int choice = 0;
	drivers myCharacter;

	// main window loop 
	while (exit == false) {
		std::cout << "Select an Option: " << std::endl;
		std::cout << "(1) Create your Character" << std::endl;
		std::cout << "(2) See your stats" << std::endl;
		std::cout << "(3) Exit" << std::endl;
		std::cout << "Your Choice: ";
		std::cin >> choice;

		switch (choice)
		{
		case(1):
			myCharacter = createCharacter();
			break;
		case(2):
			printCharacterStats(myCharacter);
			break;
		case(3):
			exit = true;
			break;
		default:
			break;
		}
	}



	

	system("pause");
	return 0;
}