#include "FragTrap.hpp"
#include <string>
#include <iostream>

int		main()
{
	FragTrap newFrag = FragTrap("Tim");
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
	return (0);
}