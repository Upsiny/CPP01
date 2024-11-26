#include "Zombie.hpp"

void	randomChump( std::string name ) {
    Zombie  zrandom = Zombie(name);
    zrandom.announce();

    return;
}
