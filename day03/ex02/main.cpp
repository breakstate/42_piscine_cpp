#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int		main()
{
	FragTrap newFrag = FragTrap("Tim");
	ScavTrap newScav = ScavTrap("Joe");
	
	newFrag.getValues();
	newFrag.takeDamage( 50 );
	newFrag.getValues();
	newFrag.beRepaired( 75 );
	newFrag.getValues();
	newFrag.vaulthunter_dot_exe( "test" );
	newFrag.vaulthunter_dot_exe( "test" );
	newFrag.vaulthunter_dot_exe( "test" );
	newFrag.vaulthunter_dot_exe( "test" );
	newFrag.vaulthunter_dot_exe( "test" );
	newFrag.getValues();

	newScav.getValues();
	newScav.takeDamage( 50 );
	newScav.getValues();
	newScav.beRepaired( 75 );
	newScav.getValues();
	newScav.challengeNewcomer( "test" );
	newScav.challengeNewcomer( "test" );
	newScav.challengeNewcomer( "test" );
	newScav.challengeNewcomer( "test" );
	newScav.challengeNewcomer( "test" );
	newScav.getValues();

	return (0);
}