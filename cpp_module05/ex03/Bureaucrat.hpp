#ifndef BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

using	std::string;
using	std::cout;
using	std::endl;
using	std::ostream;
using	std::istream;
using	std::exception;

class AForm;

class Bureaucrat
{
	private:
		const string	name;
		int				grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& oth);
		Bureaucrat(string name, int grade);
		~Bureaucrat();
		void incrementGrade();
		void decrementGrade();
		void	operator=(Bureaucrat &oth);
		string	getName() const;
		int		getGrade() const;
		void	signForm(AForm& form, Bureaucrat &b);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Breaucrat grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Breaucrat grade is too low");
				}
		};
		void executeForm( AForm const &form );
};

ostream& operator << (ostream& opr, const Bureaucrat &obj);

#endif