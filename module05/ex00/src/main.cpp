#include "Bureaucrat.hpp"
#include <iostream>

int main(){
	try{
		Bureaucrat Laura("Laura", 200);
	}
	catch(const std::exception &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try{
		Bureaucrat Dennis("Dennis", 1);
		Dennis.decrementGrade(50);
		Dennis.incrementGrade(55);
		Dennis.incrementGrade(20);
		Dennis.decrementGrade(200);
	}
	catch(const std::exception &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}