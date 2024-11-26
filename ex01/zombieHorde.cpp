#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
    Zombie    *Bigz = new Zombie[N];

    for (int i = 0; i < N; i++) {
        Bigz[i].setName(name);
        std::cout << "The nameless Zombie " << i + 1 << " choose to be knowned as " << Bigz[i].getName() << " " << i + 1 << " is ready to eat brain" << std::endl;
    }

     return (Bigz);
 }
