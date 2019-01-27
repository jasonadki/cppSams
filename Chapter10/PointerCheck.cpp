#include <iostream>

int main(){

	unsigned short int myAge = 5, yourAge = 10;
	unsigned short int *pAge = &myAge; // a pointer

	std::cout << "myAge:\t" << myAge;
	std::cout << "\t\tyourAge:\t" << yourAge << "\n";
	std::cout << "&myAge:\t" << &myAge;
	std::cout << "\t&yourAge:\t" << &yourAge <<"\n";

	std::cout << "pAge:\t" << pAge << "\n";
	std::cout << "*pAge:\t" << *pAge << "\n";

	int prodValue = *pAge * yourAge;
	std::cout << "*pAge * yourAge: " << prodValue << "\n\n";

	pAge = &yourAge; // Reassign the point

	std::cout << "myAge:\t" << myAge;
	std::cout << "\t\tyourAge:\t" << yourAge << "\n";
	std::cout << "&myAge:\t" << &myAge;
	std::cout << "\t&yourAge:\t" << &yourAge <<"\n";

	std::cout << "pAge:\t" << pAge << "\n";
	std::cout << "*pAge:\t" << *pAge << "\n";

	prodValue = *pAge * yourAge;
	std::cout << "*pAge * yourAge: " << prodValue << "\n\n";



	return 0;
}