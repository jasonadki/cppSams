#include <iostream>

void whileFunction();
void forFunction();

int main(){
	whileFunction();

	std::cout << "\n";

	forFunction();

	return 0;
}

void whileFunction(){
	int counter = 0;

	while (counter < 100){
		counter++;
		std::cout << (counter * 16) << " ";
	}
}

void forFunction(){
	for (int counter = 1; counter <= 100; counter++){
		std::cout << (counter * 16) << " ";
	}
}