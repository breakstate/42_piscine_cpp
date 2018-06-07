#ifndef ClapTrap_H
# define ClapTrap_H

# include <string>
# include <cstdlib>


class ClapTrap {

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap & srcObj );
	~ClapTrap( void );
	ClapTrap & operator=( ClapTrap const & rhs );
	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	getValues( void );
	void	vaulthunter_dot_exe( std::string const & target );

	int		hitPts;
	int		maxHitPts;
	int		energyPts;
	int		maxEnergyPts;
	int		level;
	std::string	name;
	int		meleeAttackDamage;
	int		rangedAttackDamage;
	int		armourDamageReduction;
};
#endif