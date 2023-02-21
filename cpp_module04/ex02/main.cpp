#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	Cat *catObject = new Cat;
	Dog	*dogObject = new Dog;
	Dog	*duckObject = new Dog;

	Animal *animalobject[] = {catObject, dogObject, duckObject};
    
	for (int i = 0; i < 3; i++)
		animalobject[i]->makeSound();
}

