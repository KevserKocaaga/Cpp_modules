#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	cout << "Cat worked" << endl;
}

Cat::Cat(const Cat& oth)
{
	*this = oth;
}

Cat::~Cat()
{
	cout << "Cat Destroyed" << endl;
}

void	Cat::operator=(const Cat& oth)
{
	type = oth.type;
	cout << "Cat copy assigment operator called" << endl;
}

void Cat::makeSound() const
{
	cout << "The Cat sound" << endl;
}
