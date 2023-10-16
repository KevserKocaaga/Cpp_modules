#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        
        Bureaucrat *ShruberryCreation = new Bureaucrat("Shruberry", 100);
        AForm *ShrubberyForm = new ShrubberyCreationForm("Home");
        ShruberryCreation->signForm(*ShrubberyForm, *ShruberryCreation);
	    ShruberryCreation->executeForm(*ShrubberyForm);
        
        Bureaucrat *RobotomyRequest = new Bureaucrat("Bilbo", 10);
        AForm *RobotomyForm = new RobotomyRequestForm("Home");
        RobotomyRequest->signForm(*RobotomyForm, *RobotomyRequest);
	    RobotomyRequest->executeForm(*RobotomyForm );

        Bureaucrat *PresidentialPardon = new Bureaucrat("Baggins", 1);
        AForm *PresidentialForm = new PresidentialPardonForm("Presidential");
        PresidentialPardon->signForm(*PresidentialForm, *PresidentialPardon);
	    PresidentialPardon->executeForm(*PresidentialForm);

    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
