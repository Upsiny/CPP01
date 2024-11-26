#include "Zombie.hpp"

Zombie::Zombie( void ) {
    std::cout << "A new Zombie nameless is created !" << std::endl;
}

Zombie::Zombie( std::string name ) {
    this->name = name;
    std::cout << "A zombie named " << this->name << " is created !" << std::endl;
}

Zombie::~Zombie( void ) {

  std::cout << this->name << " isn't hungry anymore and leave" << std::endl;
  return;
}

void Zombie::announce( void ) const {
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
    return ;
}

std::string Zombie::getName() {
    return (this->name);
}
