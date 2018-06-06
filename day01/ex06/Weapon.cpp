#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon( std::string type ) : type(type) {
	return;
}

Weapon::~Weapon( void ) {
	return;
}

const std::string&	Weapon::getType() {
	const std::string& str = this->type;
	return (str);
}

void	Weapon::setType( std::string type ) {
	this->type = type;
}

