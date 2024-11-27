#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl( void ) {
    return ;
}

Harl::~Harl( void ) {
    return ;
}

void Harl::debug( void ) {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}



void Harl::complain( std::string level ) {
    const       std::string name_level[4] = {"debug", "info", "warning", "error"};
    int         swi = -1;

    for (int i = 0; i < 4; i++) {
        if (level == name_level[i]) {
            swi = i;
            break ;
        }
    }
    switch (swi) {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}
