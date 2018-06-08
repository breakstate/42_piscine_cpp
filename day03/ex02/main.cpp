#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

void	testFrag( FragTrap & newFrag )
{
	std::cout <<"*********************** TEST FRAGTRAP ***********************" << std::endl;

	std::cout << "Taking less damage than Armour value:" << std::endl;	
	newFrag.takeDamage( 4 );
	newFrag.getValues();

	std::cout << "Testing hp min max:" << std::endl;
	newFrag.takeDamage( 30 );
	newFrag.takeDamage( 30 );
	newFrag.getValues();	
	newFrag.takeDamage( 30 );
	newFrag.takeDamage( 30 );
	newFrag.getValues();
	
	std::cout << "Taking damage at 0 hp:" << std::endl;	
	newFrag.takeDamage( 30 );
	newFrag.getValues();	
	
	std::cout << "Reparing hp:" << std::endl;
	newFrag.beRepaired( 75 );
	newFrag.getValues();

	std::cout << "Reparing hp above max hp:" << std::endl;
	newFrag.beRepaired( 75 );
	newFrag.getValues();

	std::cout << "Attacking until 0 Energy:" << std::endl;		
	newFrag.vaulthunter_dot_exe( "Enemy" );
	newFrag.vaulthunter_dot_exe( "Enemy" );
	newFrag.getValues();	
	newFrag.vaulthunter_dot_exe( "Enemy" );
	newFrag.vaulthunter_dot_exe( "Enemy" );
	newFrag.vaulthunter_dot_exe( "Enemy" );
	newFrag.getValues();	
}

void	testScav( ScavTrap & newScav )
{
	std::cout <<"*********************** TEST SCAVTRAP ***********************" << std::endl;

	std::cout << "Taking less damage than Armour value:" << std::endl;	
	newScav.takeDamage( 4 );
	newScav.getValues();

	std::cout << "Testing hp min max:" << std::endl;
	newScav.takeDamage( 30 );
	newScav.takeDamage( 30 );
	newScav.getValues();	
	newScav.takeDamage( 30 );
	newScav.takeDamage( 30 );
	newScav.getValues();
	
	std::cout << "Taking damage at 0 hp:" << std::endl;	
	newScav.takeDamage( 30 );
	newScav.getValues();	
	
	std::cout << "Reparing hp:" << std::endl;
	newScav.beRepaired( 75 );
	newScav.getValues();

	std::cout << "Reparing hp above max hp:" << std::endl;
	newScav.beRepaired( 75 );
	newScav.getValues();

	std::cout << "Challenging until 0 Energy:" << std::endl;		
	newScav.challengeNewcomer( "Enemy" );
	newScav.challengeNewcomer( "Enemy" );
	newScav.getValues();	
	newScav.challengeNewcomer( "Enemy" );
	newScav.challengeNewcomer( "Enemy" );
	newScav.challengeNewcomer( "Enemy" );
	newScav.getValues();	
}

int		main()
{
	FragTrap newFrag = FragTrap("Tim");
	FragTrap otherFrag = (newFrag);
	ScavTrap newScav = ScavTrap("Joe");
	
	testFrag( newFrag );
	testScav( newScav );

	return (0);
}