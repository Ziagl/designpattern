#ifndef _CHARACTERFACTORY_H_
#define _CHARACTERFACTORY_H_

#include "Character.h"

class CharacterFactory
{
	public:
		// Factory Method
		static Character* create(int type);
};

#endif /* _CHARACTERFACTORY_H_ */