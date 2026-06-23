#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : _name("Default"), _signGrade(20), _executeGrade(20){
	std::cout << "📄 Form '" << _name << "' appears on the desk, patiently waiting for someone's signature." << std::endl;
}

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _executeGrade(execGrade){
	validateGrade(signGrade);
	validateGrade(execGrade);

	std::cout << "📄 Form '" << _name << "' has been printed. Sign grade: " << _signGrade << ", Execute grade: " << _executeGrade << "." << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _executeGrade(other._executeGrade){
	std::cout << "📑 A photocopy of form '" << _name << "' rolls out of the copier." << std::endl;
}

Form &Form::operator=(const Form &other){
	if (this != &other)
		_signed = other._signed;

	std::cout << "✍️ Form '" << _name << "' copies another form's signature status." << std::endl;
	return (*this);
}

Form::~Form(){
	std::cout << "🗑️ Form '" << _name << "' has been shredded. Evidence destroyed." << std::endl;
}


void	Form::beSigned(const Bureaucrat &b){
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	
	_signed = true;
}

void	Form::validateGrade(int grade) const{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const std::string&	Form::getName() const{
	return (_name);
}

const std::string	Form::getSigned() const{
	if (_signed == false)
		return ("NO");
	else
		return ("YES");
}

int	Form::getSignGrade() const{
	return (_signGrade);
}

int	Form::getExecuteGrade() const{
	return (_executeGrade);
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade too low!";
}

std::ostream&	operator<<(std::ostream &os, const Form &f){
	os << f.getName() << ", signed: " << f.getSigned() << ", sign grade: " << f.getSignGrade() << ", execute grade: " << f.getExecuteGrade() << std::endl;
	return (os);
}