#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Intern intern;
	Bureaucrat boss("Boss", 1);

	AForm* form = NULL;

	std::cout << "\n===== SHRUBBERY =====\n";
	form = intern.makeForm("shrubbery creation", "garden");
	if (form)
	{
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}

	std::cout << "\n===== ROBOTOMY =====\n";
	form = intern.makeForm("robotomy request", "Bender");
	if (form)
	{
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}

	std::cout << "\n===== PRESIDENTIAL PARDON =====\n";
	form = intern.makeForm("presidential pardon", "Arthur Dent");
	if (form)
	{
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}

	std::cout << "\n===== UNKNOWN FORM =====\n";
	form = intern.makeForm("banana form", "Banana");
	if (form)
		delete form;

	std::cout << "\n===== CASE SENSITIVE TEST =====\n";
	form = intern.makeForm("Robotomy Request", "Bender");
	if (form)
		delete form;

	std::cout << "\n\n";
	return (0);
}
