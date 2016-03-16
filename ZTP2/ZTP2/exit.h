#ifndef _Exits_
#define _Exits_

enum direction{
	Dnorth,
	Dsouth,
	Dwest,
	Deast,
	Ddown,
	Dup,
};

class Room;
class Player;

class Exit{
public:
	char name[50];
	char description[300];

	Room *Origin;
	Room *Destination;

	bool opendoor;
	direction dir;


};


#endif