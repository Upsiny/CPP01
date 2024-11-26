#include "HumanB.hpp"

HumanB::HumanB( const std::string &name ) :
name(name) {
    return ;
}

HumanB::~HumanB( void ) {
    return ;
}

void HumanB::setWeapon(const Weapon &weapon) {
    this->weapon = &weapon;
}

void   HumanB::attack() const {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
