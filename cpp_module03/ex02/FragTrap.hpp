#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
    	FragTrap(const string nick);
		FragTrap(const FragTrap& oth);
		~FragTrap();
		FragTrap& operator = (const FragTrap& oth);
    	void highFivesGuys(void);
};
