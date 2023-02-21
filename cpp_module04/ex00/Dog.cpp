#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	cout << "Dog constructer worked" << endl;
}

Dog::Dog(const Dog& oth)
{
	*this = oth;
}

Dog::~Dog()
{
	cout << "Dog Destroyed" << endl;
}

void	Dog::operator=(const Dog& oth)
{
	type = oth.type;
	cout << "Dog copy assigment operator called" << endl;
}

void Dog::makeSound() const
{
	cout << "The Dog sound" << endl;
}
