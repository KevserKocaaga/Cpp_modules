#include "Weapon.hpp"

void Weapon::setType(const string& newType) 
{
    type = newType;
}

const string& Weapon::getType() const 
{
    return type;
}

Weapon::Weapon()
{

}

Weapon::Weapon(string name)
{
	type = name;
}