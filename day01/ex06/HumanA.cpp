#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA( std::string name, Weapon& weapon ) : name(name), weapon(weapon) {
	return;
}

HumanA::~HumanA( void ) {
	return;
}

void	HumanA::attack( void ) {
	std::cout << this->name << " attacks with " << this->weapon.getType() << "!" << std::endl;
}