#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>
#include <iostream>

int main()
{
	ZombieEvent newEvent;
	std::cout << std::endl;
	newEvent.randomChump();
	std::cout << std::endl;	
	newEvent.setZombieType( "Runner" );
	Zombie *newZombie = newEvent.newZombie("Manny");
	newZombie->announce();
	delete newZombie;
	std::cout << std::endl;	
	return(0);
}