#ifndef NINJATRAP_H
# define NINJATRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include <string>
# include <cstdlib>

class NinjaTrap: public ClapTrap {

public:
	NinjaTrap( void );
	NinjaTrap( std::string name );
	NinjaTrap( const NinjaTrap & srcObj );
	~NinjaTrap( void );
	NinjaTrap & operator=( NinjaTrap const & rhs );

	void	ninjaShoebox( ClapTrap & srcObj );
	void	ninjaShoebox( FragTrap & srcObj );
	void	ninjaShoebox( ScavTrap & srcObj );
	void	ninjaShoebox( NinjaTrap & srcObj );
};
#endif