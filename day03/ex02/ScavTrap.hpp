#ifndef ScavTrap_H
# define ScavTrap_H

# include "ClapTrap.hpp"
# include <string>

class ScavTrap: public ClapTrap {

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap & srcObj );
	~ScavTrap( void );
	ScavTrap & operator=( ScavTrap const & rhs );
	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	getValues( void );
	void	challengeNewcomer( std::string const & target );
};
#endif