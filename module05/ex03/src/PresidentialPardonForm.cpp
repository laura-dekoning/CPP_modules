#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_signGrade = 25;
const int PresidentialPardonForm::_execGrade = 5;

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default PPForm", _signGrade, _execGrade), _target(""){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", _signGrade, _execGrade), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	AForm::operator=(other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PPForm dead" << std::endl;
}

void	PresidentialPardonForm::execute() const{
	std::cout << "Informs that " << _target << " is pardoned by Zaphod Beeblebrox\n";
}
