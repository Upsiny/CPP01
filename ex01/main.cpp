#include "Zombie.hpp"

int main() {
    Zombie *ztmp = zombieHorde(8, "Bertrand");
    Zombie lez = Zombie("Billy");
    for (int i = 0; i < 8; i++)
        ztmp[i].announce();
    delete[] ztmp;
    lez.announce();
}
