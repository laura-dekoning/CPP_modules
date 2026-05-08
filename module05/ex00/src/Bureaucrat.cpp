#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "🗂️  Bureaucrat '" << name << "' enters the office, ready to stamp some forms with grade: " << grade << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "📉 Bureaucrat '" << getName() << "' clocks out forever — the paperwork survives without them!" << std::endl;
}


const std::string&	Bureaucrat::getName() const{
	return _name;
}

int	Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::incrementGrade(int points){
	if ((_grade - points) < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade -= points;
	std::cout << *this << std::endl;
}

void	Bureaucrat::decrementGrade(int points){
	if ((_grade + points) > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade += points;
	std::cout << *this << std::endl;
}

void	Bureaucrat::tryIncrement(int points){
	try{
		this->incrementGrade(points);
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

void	Bureaucrat::tryDecrement(int points){
	try{
		this->decrementGrade(points);
	}
	catch(const Bureaucrat::GradeTooHighException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
		return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
		return "Grade too low!";
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &b){
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}
