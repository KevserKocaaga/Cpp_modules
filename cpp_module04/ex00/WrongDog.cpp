#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	type = "WrongDog";
	cout << "WrongDog constructer worked" << endl;
}

WrongDog::WrongDog(const WrongDog& oth)
{
	*this = oth;
}

WrongDog::~WrongDog()
{
	cout << "WrongDog Destroyed" << endl;
}

void	WrongDog::operator=(const WrongDog& oth)
{
	type = oth.type;
	cout << "WrongDog copy assigment operator called" << endl;
}

void WrongDog::makeSound() const
{
	cout << "The WrongDog sound" << endl;
}
