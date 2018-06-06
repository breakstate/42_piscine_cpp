#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <string>

class HumanA {

public:

	//variables
	std::string name;
	Weapon& weapon;

	//constructors ~destructors
	HumanA( std::string name, Weapon& weapon );
	~HumanA( void );

	//member functions
	void	attack( void );

};

#endif