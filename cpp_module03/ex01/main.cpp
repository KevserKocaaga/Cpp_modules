#include "ScavTrap.hpp"


int	 main(void)
{
	ScavTrap a("Ceren");
	ScavTrap b("Kevser");
	ScavTrap c(b);

	a.attack("Zombie");
	b.takeDamage(2);
	c.beRepaired(10);
	a = b;
	a.attack("Zombie");
	b.guardGate();
}