#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {

public:

    //variables
    std::string name;
    std::string type;

    //constructor ~destructor
    Zombie( void );
    ~Zombie( void );

    //member functions
    void    setAttributes( std::string name, std::string type );
    void    announce( void );
};

#endif