#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    try
    {
        Bureaucrat highGrade("Kevser", 1);
        Bureaucrat lowGrade("Kocaaga", 79);
		Bureaucrat lowGrade2("Kocaaga2", 81);
		Bureaucrat yasemin("nergis", 34);

        Form form("Form 1", false, 100, 108);
		Form form2("Form 2", false, 80, 100);

        cout << form << endl;

        highGrade.signForm(form, highGrade);
        lowGrade.signForm(form2, lowGrade);
		lowGrade2.signForm(form2, lowGrade2);
		yasemin.signForm(form, yasemin);

        cout << form << endl;
		cout << form2 << endl;
    }
    catch (const std::exception& e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

