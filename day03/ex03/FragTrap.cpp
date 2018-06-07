#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap( void ) {
	std::cout << "Default constructor called FragTrap" << std::endl;
	this->type = "FR4G-TP";
	this->hitPts = 100;
	this->maxHitPts = 100;
	this->energyPts = 100;
	this->maxEnergyPts = 100;
	this->level = 1;
	this->name = "Default";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armourDamageReduction = 5;
}

FragTrap::FragTrap( std::string name ) {
	std::cout << "Default constructor called FragTrap" << std::endl;
	this->type = "FR4G-TP";	
	this->hitPts = 100;
	this->maxHitPts = 100;
	this->energyPts = 100;
	this->maxEnergyPts = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armourDamageReduction = 5;
}

FragTrap::FragTrap( const FragTrap & srcObj ) {
	std::cout << "Copy constructor called FragTrap" << std::endl;
	this->operator=( srcObj );
}

FragTrap::~FragTrap( void ) {
	std::cout << "Destructor called FragTrap" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	std::cout << "Assignment operator called FragTrap" << std::endl;
	this->type = "FR4G-TP";	
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

void	FragTrap::vaulthunter_dot_exe( std::string const & target ) {
	if (this->energyPts > 0) {
		int	index;
		index = 0;
		std::string attacks[5];
		attacks[0] = "left slap!";
		attacks[1] = "right slap!";
		attacks[2] = "left kick!";
		attacks[3] = "right kick!";
		attacks[4] = "head butt";
		index = rand() % 5;

		this->energyPts = this->energyPts - 25;
		std::cout << this->type << " " << this->name << " atacks " << target << " with " << attacks[index] << std::endl;
	}
	else {
		std::cout << this->type << " " << this->name << " doesn't have enough energy to attack!" << std::endl;
	}
}

