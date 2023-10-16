#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("Presidential Pardon Form", false, 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	AForm::operator=(other);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw FormNotSignedException();

    if (executor.getGrade() > getExecuteGrade())
        throw GradeTooLowException();

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
