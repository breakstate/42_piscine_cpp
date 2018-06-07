#include "ScavTrap.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap( void ) {
	std::cout << "Default constructor called ScavTrap" << std::endl;
	this->type = "SC4V-TP";
	this->hitPts = 100;
	this->maxHitPts = 100;
	this->energyPts = 50;
	this->maxEnergyPts = 50;
	this->level = 1;
	this->name = "Default";
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armourDamageReduction = 3;
}

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "Default constructor called ScavTrap" << std::endl;
	this->type = "SC4V-TP";	
	this->hitPts = 100;
	this->maxHitPts = 100;
	this->energyPts = 50;
	this->maxEnergyPts = 50;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armourDamageReduction = 3;
}

ScavTrap::ScavTrap( const ScavTrap & srcObj ) {
	std::cout << "Copy constructor called ScavTrap" << std::endl;
	this->operator=( srcObj );
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Destructor called ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
	std::cout << "Assignment operator called ScavTrap" << std::endl;
	this->type = "SC4V-TP";	
	this->hitPts = rhs.hitPts;
	this->maxHitPts = rhs.maxHitPts;
	this->energyPts = rhs.energyPts;
	this->maxEnergyPts = rhs.maxEnergyPts;
	this->level = rhs.level;
	this->name = rhs.name;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armourDamageReduction = rhs.armourDamageReduction;
	return (*this);
}

void	ScavTrap::challengeNewcomer( std::string const & target ) {
	if (this->energyPts > 0) {
		int	index;
		index = 0;
		std::string challenge[5];
		challenge[0] = "staring duel!";
		challenge[1] = "rap battle!";
		challenge[2] = "balancing contenst!";
		challenge[3] = "game of rock paper scissors!";
		challenge[4] = "foot race!";
		index = rand() % 5;

		this->energyPts = this->energyPts - 25;
		std::cout << this->type << " " << this->name << " challenges " << target << " to a " << challenge[index] << std::endl;
	}
	else {
		std::cout << this->type << " " << this->name << " doesn't have enough energy to challenge!" << std::endl;
	}
}

