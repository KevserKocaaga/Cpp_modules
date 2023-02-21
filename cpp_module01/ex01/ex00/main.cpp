#include "Zombie.hpp"

int	main(void)
{
	Zombie *first;
	first = zombieHorde(6,"mehmet");
	int i = 0;
	while(i < 6)
	{
		first[i].announce();
		i++;
	}
	delete [] first;
}
