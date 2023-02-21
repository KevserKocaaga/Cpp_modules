#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const string nick);
		FragTrap(const FragTrap& oth);
		~FragTrap();
		FragTrap& operator = (const FragTrap& oth);
		void highFivesGuys(void);
};

#endif