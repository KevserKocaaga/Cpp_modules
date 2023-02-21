#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
    	ScavTrap();
        ScavTrap(const string nick);
		ScavTrap(const ScavTrap& oth);
		~ScavTrap();
		ScavTrap& operator = (const ScavTrap& oth);
		void guardGate();
};

#endif