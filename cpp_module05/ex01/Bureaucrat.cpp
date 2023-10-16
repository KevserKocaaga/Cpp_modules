#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(1) {}

Bureaucrat::Bureaucrat(string name, int grd) : name(name)
{
	if (grd > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grd < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = grd;
}

Bureaucrat::Bureaucrat(const Bureaucrat& oth) : name(oth.name)
{
	this->grade = oth.grade;
}

Bureaucrat::~Bureaucrat()
{
	cout << "Destoryed Bureaucrat" << endl;
}

void	Bureaucrat::operator=(Bureaucrat &oth)
{
	this->grade = oth.grade;
}

string	Bureaucrat::getName() const
{
	return (name);
}

int		Bureaucrat::getGrade() const
{
	return (grade);
}

std::ostream& operator << (std::ostream& opr, const Bureaucrat &obj)
{
    opr<< obj.getName() << " bureaucrat grade " << obj.getGrade();
	return (opr);
}

void Bureaucrat::incrementGrade()
{
	if(grade - 1 >= 1)
		grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if(grade + 1 <= 150)
		grade++;
	else
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form& form, Bureaucrat &b)
{
    try
    {
        form.beSigned(b);
        cout << name << " signed " << form.getName() << endl;
    }
    catch (exception& e)
    {
		cout << b << " couldn't sign " << form.getName() << " because " << e.what() << endl;
    }
}

