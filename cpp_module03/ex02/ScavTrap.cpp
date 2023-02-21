#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Default";
    Hit = 100;
	damage = 20;
	Energy = 50;
    cout << "ScavTrap Worked" << endl;
}

ScavTrap::ScavTrap(const string nick)
{
    name = nick;
	Hit = 100;
	damage = 20;
	Energy = 50;
	cout << "Nick name constructer worked" << endl;
}

ScavTrap::ScavTrap(const ScavTrap& oth) :ClapTrap(oth)
{
	cout << "ScavTrap worked" << endl;
	*this = oth;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap Destroyed" << endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& oth)
{
    if (this != &oth)
    {
        ClapTrap::operator=(oth);
    }
    return *this;
}

void ScavTrap::guardGate()
{
    cout << "***We are the champions***\nssshh class in a gate keeper mode" << endl;
}
