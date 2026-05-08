#include "Bureaucrat.hpp"
#include <iostream>

int main(){
	try{
		Bureaucrat Laura("Laura", 200);
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}

	Bureaucrat Dennis("Dennis", 1);
	Dennis.tryDecrement(50);
	Dennis.tryIncrement(55);
	Dennis.tryIncrement(20);
	Dennis.tryDecrement(200);

	return 0;
}