#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>

std::string	ZombieHorde::randName() {
	int	index;
	index = 0;

	std::string names[5];
	names[0] = "Bill";
	names[1] = "Fred";
	names[2] = "Harry";
	names[3] = "George";
	names[4] = "Tim";

	index = rand() % 5;
	return (names[index]);
}

std::string	ZombieHorde::randType() {
	int	index;
	index = 0;
	
	std::string names[5];
	names[0] = "Walker";
	names[1] = "Runner";
	names[2] = "Jumper";
	names[3] = "Hugger";
	names[4] = "Creeper";

	index = rand() % 5;
	return (names[index]);
}

void	ZombieHorde::announce() {
	int	index = -1;

	while (++index < amount)
	{
		horde[index].announce();
		std::cout << std::endl;
	}
}

ZombieHorde::ZombieHorde( int n ) : amount(n) {
	std::cout << "ZombieHorde created!" << std::endl;

	int		index;
	index = -1;
	
	this->horde = new Zombie[amount];
	while (++index < amount)
		horde[index].setAttributes( this->randName(), this->randType() );
	return;
}

ZombieHorde::~ZombieHorde( void ) {
	std::cout << "ZombieHorde destroyed!" << std::endl;
	delete [] this->horde;
	return;
}
