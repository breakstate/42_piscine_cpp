#include <string>
#include <iostream>

int		main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "Display using pointer: " << *ptr << std::endl;
	std::cout << "Display using reference: " << ref << std::endl;

	return (0);
}