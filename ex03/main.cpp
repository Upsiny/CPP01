#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    {
        Weapon club = Weapon("crude spiked club");
//        std::cout << "club type : " << club.getType() << '\n';
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("a big Axe");
//        std::cout << "club type : " << club.getType() << '\n';
//        std::cout << "bob weapon type : " << bob.getWeaponType() << '\n';
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("his bare hands");
        jim.attack();
    }
    // why use const
    {
        Weapon sword = Weapon("regular soldier sword");
        const Weapon brisingr = Weapon("a magic sword");

        HumanA murthag("Murthag", sword);
        HumanA eragon("Eragon", brisingr);
        murthag.attack();
        eragon.attack();
    }
    return 0;
}
