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

	void	ninjaShoebox( ClapTrap const & srcObj );
	void	ninjaShoebox( FragTrap const & srcObj );
	void	ninjaShoebox( ScavTrap const & srcObj );
	void	ninjaShoebox( NinjaTrap const & srcObj );
};
#endif