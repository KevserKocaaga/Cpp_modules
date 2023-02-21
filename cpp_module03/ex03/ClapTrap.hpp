#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

class	ClapTrap
{
	protected:
		string name;
		int	Hit;
		int	Energy;
		int	damage;
    public:
		ClapTrap();
		ClapTrap(const string nick);
		ClapTrap(const ClapTrap& oth);
		ClapTrap&	operator=(const ClapTrap& oth);
		~ClapTrap();
		void	attack(const string& target);
        void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif