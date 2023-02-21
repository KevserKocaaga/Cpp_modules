#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Inanc";
	Hit = 10;
	damage = 0;
	Energy = 10;
    cout << "ClapTrap worked" << endl;
}

ClapTrap::ClapTrap(const string nick)
{
	name = nick;
	Hit = 10;
	damage = 0;
	Energy = 10;
    cout << "ClapTrap worked" << endl;
}

ClapTrap::ClapTrap(const ClapTrap& oth)
{
	Hit = oth.Hit;
	damage = oth.damage;
	Energy = oth.Energy;
	cout << "Copy ClapTrap worked" << endl;
}

ClapTrap::~ClapTrap()
{
    cout << "deconstructer called" << endl;
}

void	ClapTrap::attack(const string& target)
{
	if (Energy <= 0 || Hit <= 0)
		cout << "Died" << endl;
	else
	{
		Energy--;
		cout << name <<" Attackted to " << target << " causing " << damage <<" points of damage!" << endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit <= 0 || Energy <= 0)
		cout << "Already " << name << " died" << endl;
	else
	{
		Hit -= amount;
    	cout << name << " caused damage " << amount << endl;
		if (Hit > 0)
			cout << name << " remaining lives " << Hit << endl;
		else
			cout << name << " died" << endl; 
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit <= 0 || Energy <= 0)
		cout << "Already " << name << " died" << endl;
   Energy -= 1;
   Hit += amount;
   cout << name << "repaired himself " << amount << " current life is " << Hit << endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& oth)
{
	Hit = oth.Hit;
	damage = oth.damage;
	Energy = oth.Energy;
	return (*this);
}
