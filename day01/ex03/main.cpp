#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <string>
#include <iostream>

int		main()
{
	int	n;
	std::cout << "Enter number of zombies in the horde: ";
	std::cin >> n;
	ZombieHorde newHorde(n);
	std::cout << std::endl;
	newHorde.announce();
	return (0);
}