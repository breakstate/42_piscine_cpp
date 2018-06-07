#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int		main()
{
	FragTrap newFrag = FragTrap("Tim");
	ScavTrap newScav = ScavTrap("Joe");
	NinjaTrap newNinja = NinjaTrap("Jeffrey");
	
	newFrag.getValues();
	newFrag.takeDamage( 50 );
	newFrag.getValues();
	newFrag.beRepaired( 75 );
	newFrag.vaulthunter_dot_exe( "test" );
	newFrag.getValues();

	newScav.getValues();
	newScav.takeDamage( 50 );
	newScav.getValues();
	newScav.beRepaired( 75 );
	newScav.challengeNewcomer( "test" );
	newScav.getValues();

	newNinja.getValues();
	newNinja.takeDamage( 50 );
	newNinja.getValues();
	newNinja.beRepaired( 75 );
	newNinja.ninjaShoebox( newScav );
	newNinja.getValues();

	return (0);
}