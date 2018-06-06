#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieEvent {

public:

	//variables
	std::string name;
	std::string type;

	//constructor ~destructor
	ZombieEvent( void );
	~ZombieEvent( void );

	//member functions
	void	randomChump();
	void	setZombieType( std::string type );
	Zombie	*newZombie(std::string name);
};

#endif