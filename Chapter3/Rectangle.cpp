#include <iostream>

int main(){

	// Create a type definition
	typedef unsigned short USHORT;

	// Set up width and length
	USHORT width = 10;
	USHORT length = 15;

	// Create an unisgned short initialized with the
	// result of multiplying width by length
	USHORT area = width * length;

	std::cout << width << " * " << length << " = " << area;

	return 0;
}