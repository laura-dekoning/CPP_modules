#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"





AForm *makeForm(const std::string &_formName, const std::string &_formTarget){
	try
	{
		std::cout << "Intern creates: " << _formName << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
