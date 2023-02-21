#include "Zombie.hpp"

void	randomChump(string name)
{
    Zombie	*person;

	person = newZombie(name);
	person->announce();
}