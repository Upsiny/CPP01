#include "Zombie.hpp"

// BraiiiiiiinnnzzzZ...

Zombie::Zombie( std::string name ) {
    this->name = name;
    std::cout << "Zombie : " << this->name << " is created !" << std::endl;
}

Zombie::~Zombie( void ) {

  std::cout << this->name << " is dead for good !!" << std::endl;
  return;
}

void Zombie::announce( void ) const {
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
