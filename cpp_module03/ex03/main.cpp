
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap dmd( "Angela" );

	cout << endl;
	cout << "Health: " << dmd.get_Hit() << endl;
	cout << "Attack Damage Point: " << dmd.get_damage() << endl;
	cout << "Energy Point: " << dmd.get_Energy() << endl;
	cout << endl;

	dmd.attack( "Mao" );
	cout << "Health: " << dmd.get_Hit() << endl;
	dmd.beRepaired( 2 );
	cout << "Health: " << dmd.get_Hit() << endl << "Energy Point: " << dmd.get_Energy() << endl;
	dmd.whoAmI();

	// virtual inhetaince keyword'u arastir, -WShadow vb. flag'lere bak
	return 0;
}