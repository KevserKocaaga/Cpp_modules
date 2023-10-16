#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat B1("Kevser", 0);
		cout << B1 << endl;
	}
	catch(const std::exception & x){
		cout << x.what() << endl;
	}
	try
	{
		Bureaucrat B2("kocaaga", 150);
		cout << B2 << endl;
	}
	catch(const std::exception & oth){
		cout << oth.what() << endl;
	}
	try{
		Bureaucrat B3("ahc", 10);
		cout << B3 << endl;
	}
	catch(const std::exception & oth){
		cout << oth.what() << endl;
	}
	try{
		Bureaucrat B4("b4", 149);
		B4.decrementGrade();
		B4.decrementGrade();
		cout << B4 << endl;
	}
	catch(const std::exception & oth){
		cout << oth.what() << endl;
	}
}