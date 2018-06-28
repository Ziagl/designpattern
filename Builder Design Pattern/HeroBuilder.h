#ifndef _HEROBUILDER_H_
#define _HEROBUILDER_H_

#include "Hero.h"

class HeroBuilder
{
public:
	Hero buildWarrior();
	Hero buildWizard();
	Hero buildRogue();
};

#endif /* _HEROBUILDER_H_ */