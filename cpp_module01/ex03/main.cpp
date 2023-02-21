#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon knife;
    knife.setType("knife");
    HumanA john("John", knife);
    john.attack();
    knife.setType("naber");
    john.attack();

    Weapon gun;
    gun.setType("gun");
    HumanB bob("Bob");
    bob.attack();
    bob.setWeapon(&gun);
    bob.attack();
    gun.setType("Mehmet");
    bob.attack();

    return 0;
}