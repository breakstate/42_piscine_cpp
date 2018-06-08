#include "NinjaTrap.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

NinjaTrap::NinjaTrap( void ) {
	std::cout << "Default constructor called NinjaTrap" << std::endl;
	this->type = "N1NJ4-TP";
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

NinjaTrap::NinjaTrap( std::string name ) {
	std::cout << "Default constructor called NinjaTrap" << std::endl;
	this->type = "N1NJ4-TP";	
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

NinjaTrap::NinjaTrap( const NinjaTrap & srcObj ) {
	std::cout << "Copy constructor called NinjaTrap" << std::endl;
	this->operator=( srcObj );
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << "Destructor called NinjaTrap" << std::endl;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs ) {
	std::cout << "Assignment operator called NinjaTrap" << std::endl;
	this->type = "N1NJ4-TP";	
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

void	NinjaTrap::ninjaShoebox( ClapTrap & srcObj ) {
	if (this->energyPts > 0)
	{
		this->energyPts -= 25;
		std::cout << this->type << " shoeboxes " << "ClapTrap!" << std::endl;
		srcObj.getValues();				
	}
	else
		std::cout << this->type << " doesn't have enough energy to shoebox!" << std::endl;
}

void	NinjaTrap::ninjaShoebox( FragTrap & srcObj ) {
	if (this->energyPts > 0)
	{
		this->energyPts -= 25;
		std::cout << this->type << " shoeboxes " << "FragTrap!" << std::endl;
		srcObj.getValues();				
	}
	else
		std::cout << this->type << " doesn't have enough energy to shoebox!" << std::endl;
}

void	NinjaTrap::ninjaShoebox( ScavTrap & srcObj ) {
	if (this->energyPts > 0)
	{
		this->energyPts -= 25;
		std::cout << this->type << " shoeboxes " << "ScavTrap!" << std::endl;
		srcObj.getValues();		
	}
	else
		std::cout << this->type << " doesn't have enough energy to shoebox!" << std::endl;
}

void	NinjaTrap::ninjaShoebox( NinjaTrap & srcObj ) {
	if (this->energyPts > 0)
	{
		this->energyPts -= 25;
		std::cout << this->type << " shoeboxes " << "NinjaTrap!" << std::endl;
		srcObj.getValues();
	}
	else
		std::cout << this->type << " doesn't have enough energy to shoebox!" << std::endl;
}