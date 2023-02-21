#include "Zombie.hpp"

int	main(void)
{
	Zombie *first;

	first = newZombie("mehmet");
	if (1)
	{
		Zombie *second;
		second = newZombie("ahmet");
        randomChump(second->getName());
        delete []second;
	}
	delete []first;
}
