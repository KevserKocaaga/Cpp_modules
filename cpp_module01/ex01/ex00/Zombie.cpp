#include "Zombie.hpp"

void Zombie::announce(void)
{
    cout << Name << ": BraiiiiiiinnnzzzZ... " << endl;
}

Zombie::~Zombie()
{
	cout << Name << " Died" << endl;
}

Zombie::Zombie()
{

}
