#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>
#include <ostream>

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_signed = false;
	const int			_signGrade;
	const int			_executeGrade;
public:
	Form(/* args */);
	~Form();

	void	beSigned(const Bureaucrat &b);

	//exceptions
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &os, Form f);

#endif