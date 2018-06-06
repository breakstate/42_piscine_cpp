#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie( void ) {
	std::cout << "Zombie is born!" << std::endl;
	return;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie died!" << std::endl;
	return;
}

void	Zombie::setAttributes( std::string name, std::string type ) {
	this->name = name;
	this->type = type;
}

void	Zombie::announce( void ) {
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Type: " << this->type << std::endl;
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
	return;
}