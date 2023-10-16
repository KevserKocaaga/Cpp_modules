#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("Robotomy Request Form", false, 72, 45), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other) {
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	AForm::operator=(other);
	return *this;
}

void RobotomyRequestForm::execute( const Bureaucrat &obj ) const
{
	if (!getIsSigned())
        throw FormNotSignedException();

    if (obj.getGrade() > getExecuteGrade())
        throw GradeTooLowException();
    else
	{
		srand(time(NULL));
		std::cout << "Drilling noises..." << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Robotomy failed!" << std::endl;
	}
}