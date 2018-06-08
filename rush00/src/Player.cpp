#include "Player.hpp"
#include <string>

Player::Player( void ) {
	this->x = 0;
	this->y = 0;
	std::string chr = "o";
}

Player::Player( Player & srcObj ) {

}

Player & Player::operator=( Player & srcObj ) {

}

Player::~Player( void ) {

}