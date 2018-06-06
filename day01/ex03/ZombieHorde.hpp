#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"
# include <string>

class ZombieHorde {

public:

	//variables
	int		amount;
	Zombie	*horde;

	//constructor ~destructor
	ZombieHorde( int n );
	~ZombieHorde( void );

	//member functions
	void		announce();
	std::string	randName();
	std::string	randType();
};

#endif