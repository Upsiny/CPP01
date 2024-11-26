#include "HumanA.hpp"

HumanA::HumanA( const std::string &name, const Weapon &weapon ) :
name(name), weapon(weapon){
    return ;
}

HumanA::~HumanA( void ) {
    return;
}

void   HumanA::attack() const {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
