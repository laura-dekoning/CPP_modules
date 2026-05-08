#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	const std::string&	getName() const;
	int					getGrade() const;

	void				incrementGrade(int points);
	void				decrementGrade(int points);

	//helpers
	void				tryIncrement(int points = 1);
	void				tryDecrement(int points = 1);

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

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &b);

#endif