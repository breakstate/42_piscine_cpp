#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap( void ) {
	std::cout << "Default constructor called ScavTrap" << std::endl;
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

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP" << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}
void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP" << this->name << " melee attacks " << target << ", causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount) {
	if ((int)amount > this->armourDamageReduction)
		amount = amount - this->armourDamageReduction;
	else
		amount = 0;
	if ((int)amount > this->hitPts)
	{
		std::cout << "SC4V-TP " << this->name << " hit for (-" << amount << ")." << std::endl;
		this->hitPts = 0;
	}
	else
	{
		std::cout << "SC4V-TP " << this->name << " takes " << amount << " points of damage" << std::endl;
		this->hitPts = this->hitPts - amount;
	}
	if (this->hitPts == 0)
		std::cout << "I think it's dead..." << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount) {
	if ((int)amount > (this->maxHitPts - this->hitPts) && this->hitPts < this->maxHitPts) {
		std::cout << "SC4V-TP " << this->name << " is fully healed (+" << amount << "), with " << this->maxHitPts - amount << " to spare" << std::endl;
		this->hitPts = this->maxHitPts;
	}
	else if (this->hitPts == this->maxHitPts) {
		std::cout << "SC4V-TP " << this->name << " is at max health!" << std::endl;
	}
	else {
		std::cout << "SC4V-TP " << this->name << " is healed for " << amount << "!" << std::endl;
		this->hitPts = this->hitPts + amount;
	}
}
void	ScavTrap::getValues( void ) {
	std::cout << std::endl;
	std::cout << "SC4V-TP: " << this->name << std::endl;
	std::cout << "Hit points: " << this->hitPts << std::endl;
	std::cout << "Energy points: " << this->energyPts << std::endl;
	std::cout << std::endl;	
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
		std::cout << "SC4V-TP " << this->name << " challenges " << target << " to a " << challenge[index] << std::endl;
	}
	else {
		std::cout << "SC4V-TP " << this->name << " doesn't have enough energy to challenge!" << std::endl;
	}
}

