#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Animal";
	cout << "Animal worked" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& oth)
{
	*this = oth;
}

WrongAnimal::~WrongAnimal()
{
	cout << "Animal Destroyed" << endl;
}

void	WrongAnimal::operator=(const WrongAnimal& oth)
{
	type = oth.type;
	cout << "Animal copy assigment operator called" << endl;
}

void WrongAnimal::makeSound() const
{
	cout << "The Animal sound" << endl;
}

string	WrongAnimal::getType() const { return (type); }
