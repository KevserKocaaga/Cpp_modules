#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
	name = "";
	ClapTrap::name = "Inanc";
	FragTrap::Hit = 100;
	FragTrap::damage = 30;
	ScavTrap::Energy = 50;

    cout << "Diamond worked" << endl;
}

DiamondTrap::DiamondTrap(const string nick) : ClapTrap(nick)
{
	ClapTrap::name = nick + "_clap_name";
	FragTrap::Hit = 100;
	FragTrap::damage = 30;
	ScavTrap::Energy = 50;
    cout << "Diamond worked" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& oth)
{
	Hit = oth.Hit;
	damage = oth.damage;
	Energy = oth.Energy;
	cout << "Copy Diamond worked" << endl;
}

DiamondTrap::~DiamondTrap()
{
    cout << "Diamond Deconstructer called" << endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& oth)
{
	Hit = oth.Hit;
	damage = oth.damage;
	Energy = oth.Energy;
	ClapTrap::name = oth.name;
	FragTrap::Hit = oth.Hit;
	FragTrap::damage = oth.damage;
	ScavTrap::Energy = oth.Energy;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	cout << name << ClapTrap::name << endl;
	cout << "whoamI" << endl;
}

string	DiamondTrap::get_name()
{
	return (name);
}

int	DiamondTrap::get_Hit()
{
	return (Hit);
}

int	DiamondTrap::get_Energy()
{
	return (Energy);
}

int	DiamondTrap::get_damage()
{
	return (damage);
}
