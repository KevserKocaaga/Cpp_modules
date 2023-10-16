#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class AForm;

class Intern {
public:
    Intern();
    ~Intern();
    Intern(const Intern &other);
	Intern &operator=(const Intern &other);

    AForm* makeForm(string name, string target);
    class UnknownForm : public std::exception
	{
	public:
		virtual const char* what() const throw()
        {
            return("The form is not exist");
        }
	};
};

#endif
