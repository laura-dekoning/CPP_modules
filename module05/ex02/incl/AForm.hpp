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

	virtual void	execute() const = 0;

public:
	AForm();
	AForm(const std::string &name, int signGrade, int execGrade);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	void	validateGrade(int grade) const;
	void	checkGrade(int grade, int requiredGrade) const;
	void	beSigned(const Bureaucrat &b);
	void	beExecuted(Bureaucrat const &executor) const;

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

std::ostream&	operator<<(std::ostream &os, const AForm &f);

#endif