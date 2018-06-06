#ifndef BRAIN_H
# define BRAIN_H

# include <string>

class Brain {

public:

	//variables
	std::string strAddress;

	//constructor ~destructor
	Brain( void );
	~Brain( void );

	//member functions
	std::string	identify() const;
};

#endif