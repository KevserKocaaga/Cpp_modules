#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Default";
    Hit = 100;
	damage = 20;
	Energy = 50;
    cout << "ScavTrap Worked" << endl;
}

FragTrap::FragTrap(const string nick)
{
    name = nick;
	Hit = 100;
	damage = 20;
	Energy = 50;
	cout << "Nick name constructer worked" << endl;
}

FragTrap::FragTrap(const FragTrap& oth) :ClapTrap(oth)
{
	cout << "ScavTrap worked" << endl;
	*this = oth;
}

FragTrap::~FragTrap()
{
	cout << "ScavTrap Destroyed" << endl;
}

FragTrap&   FragTrap::operator = (const FragTrap& oth)
{
    if (this != &oth)
    {
        ClapTrap::operator=(oth);
    }
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    cout << "HIGH FIVE" << endl;
}
