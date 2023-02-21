#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	Animal	*kevser[8];
	int		max = 8;
	int		i;

	i = 0;
	while (i < max)
	{
		if (i < (2 / max))
			kevser[i] = new Dog();
		else
			kevser[i] = new Cat();
		i++;
	}
	
	i = 0;
	while(i < max)
	{
		kevser[i]->makeSound();
		i++;
	}
	i = 0;
	while(i < max)
	{
		delete kevser[i];
		i++;
	}
}

