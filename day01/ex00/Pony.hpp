#ifndef PONY_H
# define PONY_H
# include <string>

class Pony {

public:

    //variables
    std::string colour;
    int         wins;
    int         gender;

    //constructor ~destructor
    Pony( std::string p1, int p2, int p3 );
    ~Pony( void );

    //member funciton declarations
}; 

#endif