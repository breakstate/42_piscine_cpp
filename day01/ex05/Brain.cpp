#include "Brain.hpp"
#include <string>
#include <sstream>
#include <iostream>

Brain::Brain( void ) {
	const void *address; 
	address = static_cast<const void*>(this);

	std::stringstream ss;
	ss << address;  

	this->strAddress = ss.str(); 
	return;
}

Brain::~Brain( void ) {
	return;
}

std::string	Brain::identify() const{
	return (this->strAddress);
}