#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <string>

class HumanB {

public:

	//variables
	std::string name;
	Weapon* weapon;

	//constructors ~destructors
	HumanB( std::string name );
	~HumanB( void );

	//member functions
	void	attack( void );
	void	setWeapon( Weapon& weapon );
};

#endif