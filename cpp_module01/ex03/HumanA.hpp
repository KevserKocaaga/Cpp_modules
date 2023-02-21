#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;

//Human A sınfında class referans ile gösterildiğinden Human A her zaman weapon a sahip olmuş olacak.

class HumanA {
private:
    Weapon &weapon;
    string name;
public:
	HumanA(const string& newName, Weapon& gun);
	void	attack(void);
};


/*class HumanA : Weapon
{
	private:
		string	name;
		Weapon	weapon1;
	public:
		HumanA();
		HumanA(string name, Weapon& gun);
		string	getType() const;
		void	setType(string get);
		void	attack(void);
};
*/



#endif