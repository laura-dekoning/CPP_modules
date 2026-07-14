#include "Intern.hpp"

Intern::Intern(){
	std::cout << "📋 An intern rushes into the office, ready to create forms all day!" << std::endl;
}

Intern::Intern(const Intern &other){
	(void)other;
	std::cout << "📋 An intern has been cloned. Twice the paperwork!" << std::endl;
}

Intern& Intern::operator=(const Intern &other){
	(void)other;
	std::cout << "📋 One intern learns the tricks of another." << std::endl;
	return (*this);
}

Intern::~Intern(){
	std::cout << "🏃 The intern's shift is over. No more forms today!" << std::endl;
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target){
	for (int i = 0; i < 3; i++)
	{
		if (formName == FormEntryTable[i].name)
			return (FormEntryTable[i].creator(target));
	}
	std::cout << "Form name is unknown!" << std::endl;
}

AForm* Intern::createShrubberyCreation(const std::string& target){
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createRobotomyrequest(const std::string& target){
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createPresidentialPardon(const std::string& target){
	return (new PresidentialPardonForm(target));
}

