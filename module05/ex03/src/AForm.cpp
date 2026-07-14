#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : _name("Default"), _signGrade(150), _executeGrade(150){
	std::cout << "📄 AForm '" << _name << "' appears on the desk, patiently waiting for someone's signature." << std::endl;
}

AForm::AForm(const std::string &name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _executeGrade(execGrade){
	validateGrade(signGrade);
	validateGrade(execGrade);

	std::cout << "📄 AForm '" << _name << "' has been printed. Sign grade: " << _signGrade << ", Execute grade: " << _executeGrade << "." << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _executeGrade(other._executeGrade){
	std::cout << "📑 A photocopy of Aform '" << _name << "' rolls out of the copier." << std::endl;
}

AForm &AForm::operator=(const AForm &other){
	if (this != &other)
		_signed = other._signed;

	std::cout << "✍️ AForm '" << _name << "' copies another Aform's signature status." << std::endl;
	return (*this);
}

AForm::~AForm(){
	std::cout << "🗑️ AForm '" << _name << "' has been shredded. Evidence destroyed." << std::endl;
}

void	AForm::beExecuted(Bureaucrat const &executor) const{
	if (executor.getGrade() > _executeGrade)
		throw GradeTooLowException();
	else if (!_signed)
		throw std::runtime_error("Form not signed!");

	execute();
}

void	AForm::beSigned(const Bureaucrat &b){
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
}

void	AForm::validateGrade(int grade) const{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

void	AForm::checkGrade(int grade, int requiredGrade) const{
	if (grade < requiredGrade)
		throw GradeTooHighException();
	if (grade > requiredGrade)
		throw GradeTooLowException();
}

const std::string&	AForm::getName() const{
	return (_name);
}

const std::string	AForm::getSigned() const{
	if (_signed == false)
		return ("NO");
	else
		return ("YES");
}

int	AForm::getSignGrade() const{
	return (_signGrade);
}

int	AForm::getExecuteGrade() const{
	return (_executeGrade);
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade too low!";
}

std::ostream&	operator<<(std::ostream &os, const AForm &f){
	os << f.getName() << ", signed: " << f.getSigned() << ", sign grade: " << f.getSignGrade() << ", execute grade: " << f.getExecuteGrade() << std::endl;
	return (os);
}