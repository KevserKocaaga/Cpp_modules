#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main() {
    try
    {
        Intern someIntern;

        Bureaucrat b1( "President", 134 );
        Bureaucrat b2( "Robot", 2 );
        Bureaucrat b3( "Shruberry", 56 );
        AForm *form1;
        AForm *form2;
        AForm *form3;
        AForm *form4;

        form1 = someIntern.makeForm("PresidentialPardonForm", "Bilbo");
        form2 = someIntern.makeForm("RobotomyRequestForm", "Baggins");
        form3 = someIntern.makeForm("ShrubberyCreationForm", "Gandalf");
        

        b1.signForm( *form1, b1 );
        cout << "burada" << endl;
		b2.signForm( *form2, b2 );
		b3.signForm( *form3, b3 );
		b1.executeForm( *form1 );
		b3.executeForm( *form2);
        
        form4 = someIntern.makeForm("unknown form", "Unknown");
        b2.executeForm( *form4 );

        delete form1;
        delete form2;
        delete form3;
        delete form4;

    }
    catch(exception& e)
    {
        cout << "we have an exception: " <<  e.what() << endl;
    }
}