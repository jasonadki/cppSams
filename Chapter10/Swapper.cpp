#include <iostream>

int main(){
	int value1 = 12500;
	int value2 = 100;

	int *pointer2 = nullptr;

	// Give pointer2 the address of value2
	pointer2 = &value2;

	// Dereference the pointer and assign to value1
	value1 = *pointer2;
	pointer2 = 0;

	std::cout << "value1 = " << value1 << "\n";

	return 0;

}