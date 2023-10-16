#include "AForm.hpp"

AForm::AForm(const string& name, bool isSigned, int signGrade, int executeGrade)
    : _name(name), _isSigned(isSigned), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &form) : _name(form._name), _isSigned(form._isSigned), _signGrade(form._signGrade), _executeGrade(form._executeGrade) {
	*this = form;
	cout << "Form Copy Constructor Called" << endl;
}

AForm &AForm::operator=(const AForm &form) {
	cout << "Form Assignment Operator" << endl;
	this->_isSigned = form.getIsSigned();
	return *this;
}

AForm::~AForm()
{
}

string AForm::getName() const
{
    return _name;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

int AForm::getSignGrade() const
{
    return _signGrade;
}

int AForm::getExecuteGrade() const
{
    return _executeGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() >= _signGrade || bureaucrat.getGrade() >= _executeGrade)
        throw GradeTooLowException();
    else
        _isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No") << ", Sign Grade: "
       << form.getSignGrade() << ", Execute Grade: " << form.getExecuteGrade();
    return os;
}