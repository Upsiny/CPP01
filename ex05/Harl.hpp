#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl {

    private :

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    public :
    Harl( void );
    ~Harl( void );
    typedef void(Harl::*priv_fct)(void);
    void complain( std::string level );
};

#endif
