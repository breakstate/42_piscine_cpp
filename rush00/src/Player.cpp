#include "Player.hpp"
#include <string>

Player::Player( void ) {
	this->x = 0;
	this->y = 0;
	std::string chr = "o";
}

Player::Player( Player & srcObj ) {
	// sort this out
}

Player & Player::operator=( Player & srcObj ) {
	this->x = srcObj.x;
	this->y = srcObj.y;
	return (*this);
}

Player::~Player( void ) {

}