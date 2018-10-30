#include <iostream>

main(){
	int grade;
	int minPassingGrade;

	std::cout << "What is the student's grade? \n";
	std::cin >> grade;
	std::cout << "\nWhat is the minimum passing grade? \n";
	std::cin >> minPassingGrade;
	if(grade >= minPassingGrade){
		std::cout << "\n\nThe student passed!\n";
	}
	else{
		std::cout << "\n\nThe student failed :(";
	}

	return 0;
}