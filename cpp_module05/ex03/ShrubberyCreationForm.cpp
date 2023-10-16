#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", false, 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	AForm::operator=(other);
	this->_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw FormNotSignedException();

    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    else
    {

        std::string filename = _target + "_shrubbery";
        std::ofstream file(filename);

        

        file <<  "              ,@@@@@@@," << endl;
        file <<  "      ,,,.   ,@@@@@@/@@,  .oo8888o. " << endl;
        file <<  "    ,&%%&%&&%,@@@@@/@@@@@@,8888888/8o " << endl;
        file <<  " ,%&%&&%&&%,@@@@@@@/@@@88888888/88'8  " << endl;
        file <<  "%&&%&%&/%&&%@@@@/ /@@@88888888888'88   " << endl;
        file <<  "%&&%/@%&%%&&@@ V /@@' `8888 `/88'8   " << endl;
        file <<  " `&% | | %&'    |.|         | |8'      " << endl;
        file <<  "     |o|        | |         | |        " << endl;
        file <<  "     |.|        | |         | |        " << endl;
        file <<"jgs \\/ ._\\/_/__/  ,\\//__\\/.  \\//__/_" << endl; 

        file.close();
        cout << filename << "file is created" << endl;
    }
}
