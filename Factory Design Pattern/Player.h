#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Character.h"

class Player:public Character
{
	public:
		void attack(Character*);
};

#endif /* _PLAYER_H_ */