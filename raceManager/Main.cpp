#include<iostream>
#include"Drivers.h"
#include"Cars.h"

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