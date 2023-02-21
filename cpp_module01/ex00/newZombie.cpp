#include "Zombie.hpp"

void	Zombie::setName(std::string othName)
{
	Name = othName;
}

string	Zombie::getName(void)
{
	return (Name);
}

Zombie*  newZombie(string name)
{
	Zombie *add;

	add = new Zombie[1];
	add->setName(name);
    return(add);
}