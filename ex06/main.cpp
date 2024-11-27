#include <string>
#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av) {
    (void)ac;
    Harl    karen;

    karen.complain(av[1]);
    return 0;
}
