#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	cout << "WrongCat worked" << endl;
}

WrongCat::WrongCat(const WrongCat& oth)
{
	*this = oth;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat Destroyed" << endl;
}

void	WrongCat::operator=(const WrongCat& oth)
{
	type = oth.type;
	cout << "WrongCat copy assigment operator called" << endl;
}

void WrongCat::makeSound() const
{
	cout << "The WrongCat sound" << endl;
}
