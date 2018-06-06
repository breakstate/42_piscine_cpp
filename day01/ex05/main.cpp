#include "Brain.hpp"
#include "Human.hpp"
#include <string>
#include <iostream>

int		main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}