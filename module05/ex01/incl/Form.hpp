#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed = false;
	const int			_signGrade;
	const int			_executeGrade;
public:
	Form();
	Form(const std::string &name, int signGrade, int execGrade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	
	~Form();

	void	beSigned(const Bureaucrat &b);
	void	validateGrade(int grade) const;

	//getters
	const std::string&	getName() const;
	const std::string	getSigned() const;
	int					getSignGrade() const;
	int					getExecuteGrade() const;

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

std::ostream&	operator<<(std::ostream &os, const Form &f);

#endif