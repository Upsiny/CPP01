#include <string>
#include <iostream>
#include "Harl.hpp"

int main() {
    Harl    karen;

    karen.complain("debug");
    karen.complain("info");
    karen.complain("warning");
    karen.complain("error");
    karen.complain("other");
    return 0;
}
