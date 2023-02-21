#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
    	ScavTrap();
        ScavTrap(const string nick);
		ScavTrap(const ScavTrap& oth);
		~ScavTrap();
		ScavTrap& operator = (const ScavTrap& oth);
		void guardGate();
};
