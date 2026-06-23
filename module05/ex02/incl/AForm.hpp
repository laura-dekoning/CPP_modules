#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signed = false;
	const int			_signGrade;
	const int			_executeGrade;
public:
	AForm();
	AForm(const std::string &name, int signGrade, int execGrade);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	virtual void	execute(Bureaucrat const &executor) const;
	virtual void	executeAction() const = 0;

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