#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::_signGrade = 72;
const int RobotomyRequestForm::_execGrade = 45;

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default RRForm", _signGrade, _execGrade){}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm(target, _signGrade, _execGrade){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	AForm::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RRForm dead" << std::endl;
}

void	RobotomyRequestForm::execute() const{
	std::cout << "Drrrrrrrrrrr " << _target << " has" << ((rand() % 2) ? " not" : "") << " been robotomized\n";
}
