#ifndef PLAYER_H
# define PLAYER_H

class Player {

public:
	//member attributes
	int		x;
	int		y;
	char	*chr;

	Player( void ); // default constructor
	Player( Player & srcObj ); // copy constructor
	Player & operator=( Player & srcObj ); // assignation operator overload
	~Player( void ); // destructor
/*
	getPlrX
	getPlrY
	plrLeft
	plrRight
	plrUp
	plrDown
	plrFire
*/
private:

};

#endif