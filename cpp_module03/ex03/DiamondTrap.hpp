#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>
#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		string name;
    public:
		DiamondTrap();
		DiamondTrap(const string nick);
		DiamondTrap(const DiamondTrap& oth);
		DiamondTrap&	operator=(const DiamondTrap& oth);
		~DiamondTrap();
		void whoAmI();
		string	get_name();
		int	get_Hit();
		int	get_Energy();
		int	get_damage();
};
