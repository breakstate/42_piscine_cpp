#ifndef ScavTrap_H
# define ScavTrap_H

# include "ClapTrap.hpp"
# include <string>
# include <cstdlib>

class ScavTrap: public ClapTrap {

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap & srcObj );
	~ScavTrap( void );
	ScavTrap & operator=( ScavTrap const & rhs );
	
	void	challengeNewcomer( std::string const & target );
};
#endif