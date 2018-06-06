#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>

ZombieEvent::ZombieEvent( void ) {
	std::cout << "ZombieEvent created!" << std::endl;
	//set default type
	this->type = "walker";
	return;
}

ZombieEvent::~ZombieEvent( void ) {
	std::cout << "ZombieEvent destroyed!" << std::endl;
	return;
}

void	ZombieEvent::randomChump() {
	Zombie	rando;
	int		index;

	std::string names[5];
	names[0] = "Bill";
	names[1] = "Fred";
	names[2] = "Harry";
	names[3] = "George";
	names[4] = "Tim";

	index = rand() % 5;
	rando.setAttributes(names[index], this->type);
	rando.announce();
	return;//make sure this doesn't need to return
}

void	ZombieEvent::setZombieType( std::string type ) {
	this->type = type;
}

Zombie	*ZombieEvent::newZombie( std::string name ) {
	Zombie *newZombie = new Zombie();
	newZombie->setAttributes( name, type );
	return (newZombie);
}