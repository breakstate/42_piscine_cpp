#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap( void ) {
	std::cout << "Default constructor called FragTrap" << std::endl;
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

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP" << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}
void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP" << this->name << " melee attacks " << target << ", causing " << this->meleeAttackDamage << " points of damage!" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount) {
	if ((int)amount > this->armourDamageReduction)
		amount = amount - this->armourDamageReduction;
	else
		amount = 0;
	if ((int)amount > this->hitPts)
	{
		std::cout << "FR4G-TP " << this->name << " hit for (-" << amount << ")." << std::endl;
		this->hitPts = 0;
	}
	else
	{
		std::cout << "FR4G-TP " << this->name << " takes " << amount << " points of damage" << std::endl;
		this->hitPts = this->hitPts - amount;
	}
	if (this->hitPts == 0)
		std::cout << "I think it's dead..." << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount) {
	if ((int)amount > (this->maxHitPts - this->hitPts) && this->hitPts < this->maxHitPts) {
		std::cout << "FR4G-TP " << this->name << " is fully healed (+" << amount << "), with " << this->maxHitPts - amount << " to spare" << std::endl;
		this->hitPts = this->maxHitPts;
	}
	else if (this->hitPts == this->maxHitPts) {
		std::cout << "FR4G-TP " << this->name << " is at max health!" << std::endl;
	}
	else {
		std::cout << "FR4G-TP " << this->name << " is healed for " << amount << "!" << std::endl;
		this->hitPts = this->hitPts + amount;
	}
}
void	FragTrap::getValues( void ) {
	std::cout << std::endl;
	std::cout << "FR4G-TP: " << this->name << std::endl;
	std::cout << "Hit points: " << this->hitPts << std::endl; //hit points
	std::cout << "Energy points: " << this->energyPts << std::endl; //energy points
	std::cout << std::endl;	
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
		std::cout << "FR4G-TP " << this->name << " attacks " << target << " with " << attacks[index] << std::endl;
	}
	else {
		std::cout << "FR4G-TP " << this->name << " doesn't have enough energy to attack!" << std::endl;
	}
}

