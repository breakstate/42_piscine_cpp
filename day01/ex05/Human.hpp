#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"
# include <string>

class Human {

public:

	//variables
	Brain const humanBrain;

	//constructor ~destructor
	Human( void );
	~Human( void );

	//member functions
	std::string	identify() const;
	Brain	getBrain();
};

#endif