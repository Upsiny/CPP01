#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class   HumanA {

private :
    std::string name;
    const Weapon      &weapon;

public :
    HumanA( const std::string &name, const Weapon &weapon );
    ~HumanA( void );

    void   attack( void ) const;
};

#endif
