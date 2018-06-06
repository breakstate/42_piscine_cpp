#include "Human.hpp"
#include <string>
#include <sstream>
#include <iostream>

Human::Human( void ) {
	return;
}

Human::~Human( void ) {
	return;
}

std::string	Human::identify() const{
	return (this->humanBrain.identify());
}

Brain	Human::getBrain() {
	return (humanBrain);
}