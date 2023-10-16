#include "Form.hpp"

Form::Form(const string& name, bool isSigned, int signGrade, int executeGrade)
    : _name(name), _isSigned(isSigned), _signGrade(signGrade), _executeGrade(executeGrade)
{
    if (_signGrade < 1 || _executeGrade < 1)
        throw GradeTooHighException();
    else if (_signGrade > 150 || _executeGrade > 150)
        throw GradeTooLowException();
}
Form::Form(const Form &form) : _name(form._name), _isSigned(form._isSigned), _signGrade(form._signGrade), _executeGrade(form._executeGrade) {
	*this = form;
	cout << "Form Copy Constructor Called" << endl;
}

Form &Form::operator=(const Form &form) {
	cout << "Form Assignment Operator" << endl;
	this->_isSigned = form.getIsSigned();
	return *this;
}

Form::~Form()
{
}

string Form::getName() const
{
    return _name;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

int Form::getSignGrade() const
{
    return _signGrade;
}

int Form::getExecuteGrade() const
{
    return _executeGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() >= _signGrade)
        throw GradeTooLowException();
    else
        _isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No") << ", Sign Grade: "
       << form.getSignGrade() << ", Execute Grade: " << form.getExecuteGrade();
    return os;
}