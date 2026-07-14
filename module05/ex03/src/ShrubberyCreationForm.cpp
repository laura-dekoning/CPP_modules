#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::_signGrade = 145;
const int ShrubberyCreationForm::_execGrade = 137;

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default SCForm", _signGrade, _execGrade){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", _signGrade, _execGrade), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	AForm::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "SCForm dead" << std::endl;
}

void	ShrubberyCreationForm::execute() const{
	std::ofstream	outfile(_target + "_shrubbery");

	if (!outfile)
		std::runtime_error("Failed to create file!");
	outfile << "\n\
     ccee88oo\n\
  C8O8O8Q8PoOb o8oo\n\
 dOB69QO8PdUOpugoO9bD\n\
CgggbU8OU qOp qOdoUOdcb\n\
    6OuU  /p u gcoUodpP\n\
      |||//  /douUP\n\
        |||////\n\
         |||/|\n\
         ||||/\n\
         |||||\n\
   .....//|||||....";
}
