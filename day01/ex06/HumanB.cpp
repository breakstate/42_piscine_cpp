#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanB::HumanB ( std::string name ) : name(name) {
	return;
}

HumanB::~HumanB( void ) {
	return;
}

void	HumanB::attack( void ) {
	std::cout << this->name << " attacks with " << this->weapon->getType() << "!" << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->weapon = &weapon;
}