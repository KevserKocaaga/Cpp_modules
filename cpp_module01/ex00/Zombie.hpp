#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Zombie
{
	private:
		string Name;
	public:
		Zombie();
		~Zombie();
        void	announce(void);
		void	setName(string name);
		string	getName(void);
};

void	randomChump(string name );
Zombie	*newZombie(string name);
#endif