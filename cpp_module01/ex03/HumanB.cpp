#include "HumanB.hpp"

//setweapon fonksiyonunu kullanana kadar nullptr yi gösterecek.
HumanB::HumanB(const string& newName)
{
	name = newName;
	weapon = nullptr;
}

void	HumanB::setWeapon(Weapon* newWeapon)
{
	 weapon = newWeapon;
}

void HumanB::attack()
{
    if (weapon != nullptr) 
	{
        cout << name << " attacks with their " << weapon->getType() << endl;
    } 
	else 
	{
        cout << name << " has no weapon to attack with" << endl;
    }
}