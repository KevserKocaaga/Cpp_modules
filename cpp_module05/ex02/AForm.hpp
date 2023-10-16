#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <exception>
#include <iostream>

using std::string;

class Bureaucrat;

class AForm
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
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form is not signed");
			}

	};

	AForm(const string& name, bool isSigned, int signGrade, int executeGrade);
    ~AForm();
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);

    string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute( Bureaucrat const &obj ) const = 0;

private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _executeGrade;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif

