#include "ClapTrap.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

ClapTrap::ClapTrap( void ) {
	std::cout << "Default constructor called ClapTrap" << std::endl;
	this->type = "CL4P-TP";
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

ClapTrap::ClapTrap( std::string name ) {
	std::cout << "Default constructor called ClapTrap" << std::endl;
	this->type = "CL4P-TP";	
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

ClapTrap::ClapTrap( const ClapTrap & srcObj ) {
	std::cout << "Copy constructor called ClapTrap" << std::endl;
	this->operator=( srcObj );
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called ClapTrap" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	std::cout << "Assignment operator called ClapTrap" << std::endl;
	this->type = "CL4P-TP";	
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

void	ClapTrap::rangedAttack(std::string const & target) {
	std::cout << this->type << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}
void	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << this->type << this->name << " melee attacks " << target << ", causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount) {
	int initial_amount = amount;
	if ((int)amount > this->armourDamageReduction)
		amount = amount - this->armourDamageReduction;
	else
		amount = 0;
	if ((int)amount > this->hitPts)
	{
		std::cout << this->type << " " << this->name << " hit for (-" << amount << ")." << std::endl;
		this->hitPts = 0;
	}
	else
	{
		std::cout << this->type << " " << this->name << " takes " << amount << " points of damage" << " from " << initial_amount << std::endl;
		this->hitPts = this->hitPts - amount;
	}
	if (this->hitPts == 0)
		std::cout << "I think it's dead..." << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount) {
	if ((int)amount > (this->maxHitPts - this->hitPts) && this->hitPts < this->maxHitPts) {
		std::cout << this->type << " " << this->name << " is fully healed (+" << amount << "), with " << this->maxHitPts - amount << " to spare" << std::endl;
		this->hitPts = this->maxHitPts;
	}
	else if (this->hitPts == this->maxHitPts) {
		std::cout << this->type << " " << this->name << " is at max health!" << std::endl;
	}
	else {
		std::cout << this->type << " " << this->name << " is healed for " << amount << "!" << std::endl;
		this->hitPts = this->hitPts + amount;
	}
}
void	ClapTrap::getValues( void ) {
	std::cout << std::endl;
	std::cout << this->type << ": " << this->name << std::endl;
	std::cout << "Hit points: " << this->hitPts << std::endl;
	std::cout << "Energy points: " << this->energyPts << std::endl;
	std::cout << std::endl;	
}