#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <string>
# include <cstdlib>

class FragTrap: public ClapTrap {

public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap & srcObj );
	~FragTrap( void );
	FragTrap & operator=( FragTrap const & rhs );

	void	vaulthunter_dot_exe( std::string const & target );
};
#endif