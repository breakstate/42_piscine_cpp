#include "FragTrap.hpp"
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

int		main()
{
	FragTrap newFrag = FragTrap("Tim");
	FragTrap otherFrag = (newFrag);
	
	testFrag( newFrag );

	return (0);
}