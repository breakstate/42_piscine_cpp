#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <string>

class FragTrap {

public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap & srcObj );
	~FragTrap( void );
	FragTrap & operator=( FragTrap const & rhs );
	void	rangedAttack( std::string const & target );
	void	meleeAttack( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	getValues( void );
	void	vaulthunter_dot_exe( std::string const & target );

private:
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