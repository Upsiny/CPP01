#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class   HumanB {

private :
    std::string name;
    const Weapon      *weapon;

public :
    HumanB( const std::string &name );
    ~HumanB( void );

    void   attack( void ) const;
    void   setWeapon(const Weapon &weapon);
};

#endif
