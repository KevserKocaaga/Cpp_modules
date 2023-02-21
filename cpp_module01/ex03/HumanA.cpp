#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const string& newName, Weapon &weapon2): weapon(weapon2), name(newName){}

void	HumanA::attack(void)
{
	cout << name << " attacks with their " << weapon.getType() << endl;
}
