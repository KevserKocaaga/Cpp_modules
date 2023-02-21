#include "Zombie.hpp"

void	Zombie::setName(std::string othName)
{
	Name = othName;
}

Zombie* zombieHorde(int N,string name)
{
	Zombie *add;
	int		i;

	i = 0;
	add = new Zombie[N];
	while (i < N)
	{
		add[i].setName(name);
		i++;
	}
    return(add);
}
