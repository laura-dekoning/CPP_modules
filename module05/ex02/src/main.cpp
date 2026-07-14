#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat worker("Worker", 140);
		Bureaucrat intern("Intern", 150);

		ShrubberyCreationForm shrub("garden");
		ShrubberyCreationForm shrub2("patio");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Arthur Dent");

		std::cout << "\n===== EXECUTE UNSIGNED FORM =====\n";
		boss.executeForm(shrub);
		boss.executeForm(shrub2);

		std::cout << "\n===== SIGN WITH LOW GRADE =====\n";
		worker.signForm(robot);

		std::cout << "\n===== SIGN FORMS =====\n";
		boss.signForm(shrub);
		worker.signForm(shrub2);
		boss.signForm(robot);
		boss.signForm(pardon);

		std::cout << "\n===== EXECUTE SHRUBBERY =====\n";
		boss.executeForm(shrub);
		boss.executeForm(shrub2);

		std::cout << "\n===== EXECUTE ROBOTOMY =====\n";
		for (int i = 0; i < 20; i++)
			boss.executeForm(robot);

		std::cout << "\n===== EXECUTE PARDON =====\n";
		boss.executeForm(pardon);

		std::cout << "\n===== LOW GRADE EXECUTION =====\n";
		intern.executeForm(shrub);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
