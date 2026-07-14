#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <fstream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

struct	FormEntry
{
	std::string	name;
	AForm*	(*creator)(const std::string &);
};

class	Intern
{
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();

	AForm*	makeForm(const std::string& formName, const std::string& target);

private:
	static AForm*	createShrubberyCreation(const std::string& target);
	static AForm*	createRobotomyrequest(const std::string& target);
	static AForm*	createPresidentialPardon(const std::string& target);
};


#endif