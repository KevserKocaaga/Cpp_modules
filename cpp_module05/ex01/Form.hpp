#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <exception>
#include <iostream>

using std::string;

class Bureaucrat;

class Form
{
public:
    class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("grade is too low");
				}
		};

    Form(const string& name, bool isSigned, int signGrade, int executeGrade);
    ~Form();
	Form(const Form& other);
	Form& operator=(const Form& other);

    string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);

private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _executeGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif

