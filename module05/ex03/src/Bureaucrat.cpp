#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Default"), _grade(100){
	std::cout << "🗂️  Bureaucrat '" << _name << "' enters the office, ready to stamp some forms with grade: " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name){
	validateGrade(grade);
	_grade = grade;
	std::cout << "🗂️  Bureaucrat '" << _name << "' enters the office, ready to stamp some forms with grade: " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade){
	std::cout << "Bureaucrat is copied!" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other){
	if (this != &other)
		_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "📉 Bureaucrat '" << getName() << "' clocks out forever — the paperwork survives without them!" << std::endl;
}

void	Bureaucrat::signForm(AForm &form) const{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) const{
	try
	{
		form.beExecuted(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

const std::string&	Bureaucrat::getName() const{
	return _name;
}

int	Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::incrementGrade(int points){
	validateGrade(_grade - points);
	_grade -= points;
	std::cout << "Grade incremented with " << points << " points\n" << *this << std::endl;
}

void	Bureaucrat::decrementGrade(int points){
	validateGrade(_grade + points);
	_grade += points;
	std::cout << "Grade decremented with " << points << " points\n" << *this << std::endl;
}

void	Bureaucrat::validateGrade(int grade) const{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade too low!";
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &b){
	os << b.getName() << ", bureaucrat grade: " << b.getGrade();
	return (os);
}
