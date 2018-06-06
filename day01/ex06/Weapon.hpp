#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {

public:

	//variables
	std::string type;

	//constructors ~destructors
	Weapon( std::string type );
	~Weapon( void );

	//member functions
	const std::string&	getType();
	void	setType( std::string type );
};

#endif