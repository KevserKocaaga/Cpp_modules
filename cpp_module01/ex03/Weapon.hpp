#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Weapon {
private:
    string type;
public:
    Weapon();
	Weapon(string type2);
	const string& getType() const;
    void setType(const string& newType);
};

/*class Weapon
{
	private:
		string type;
	public:
		Weapon();
		Weapon(string type2);
		string	getType() const;
		void	setType(string get);
};
*/
#endif