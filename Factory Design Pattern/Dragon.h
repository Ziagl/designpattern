#ifndef _DRAGON_H_
#define _DRAGON_H_

#include "Character.h"

class Dragon:public Character
{
	public:
		void attack(Character*);
};

#endif /* _DRAGON_H_ */