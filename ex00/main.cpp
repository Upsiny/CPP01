#include "Zombie.hpp"

int main() {
    Zombie *ztmp;

    ztmp = newZombie("Bertrand");
    randomChump("Billy");

    ztmp->announce();
    delete ztmp;
}
