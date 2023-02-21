#include <iostream>
#include <string>
#include "Weapon.hpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;
//Human B sınıfında weapon için pointer kullandık çünkü weapon olmama olasılığına izin verdik. 
//(Pointer null değerini gösterebildiği için) eğer referans kullansaydık constructer ile deault
//değer vermek zorunda olacaktık ve referans null değer olamaz.
//setweapon fonksiyonunu kullanana kadar nullptr yi gösterecek.
class HumanB {
private:
    Weapon* weapon;
    string name;
public:
    HumanB(const string& newName);

    void setWeapon(Weapon* newWeapon);
	void attack();
};


/*class HumanB : Weapon
{
	private:
		Weapon *gun;
		string	name;
	public:
		HumanB();
		HumanB(string name);
		~HumanB();
		void	setWeapon(Weapon club);
		void	attack(void);

};
*/