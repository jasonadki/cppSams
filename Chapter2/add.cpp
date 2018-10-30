#include <iostream>

int add(int x, int y){
	// add the numbers x and y together and return the sum

	std::cout << "Running calculator ..\n";
	return (x+y);
}

int main(){
	/*
		Just run the program. Duh..
	*/
	std::cout << "What is 7 + 8?\n";
	std::cout << add(7, 8) << "\n\n";
	std::cout << "What is 60 + 9?\n";
	std::cout << add(60,9);
	return 0;
}