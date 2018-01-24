#ifndef _ORC_H_
#define _ORC_H_

#include "Character.h"

class Orc:public Character
{
	public:
		void attack(Character*);
};

#endif /* _ORC_H_ */