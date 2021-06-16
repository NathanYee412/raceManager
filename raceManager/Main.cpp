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

	Optional:
	- have race team costs affect strategy
		- team member salary come out of budget
		- food costs
	- leaderboards 
*/


int main() {
	drivers user;
	user.setDriverFirstName("Nathan");
	user.setDriverLastName("Yee");
	car mycar;
	mycar.setMake("Nissan");
	mycar.setMake("240sx");
	mycar.setHp(200);
	mycar.setMilage(120000);
	user.setDriverCar(mycar);



	std::cout << "Driver: " << user.getDriverFirstName() << std::endl;

	system("pause");
	return 0;
}