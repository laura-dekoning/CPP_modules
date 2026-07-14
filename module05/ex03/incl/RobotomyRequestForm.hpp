#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	const std::string	_target;
	static const int	_signGrade;
	static const int	_execGrade;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	~RobotomyRequestForm();

	void	execute() const override;
};

#endif