#include <iostream>
#include "Character.h"

void Character::attack(Character *enemy)
{
	if(this->behavior)
		this->behavior->performAttack(this, enemy);
	//else
}

void Character::setAttackBehavior(IAttackBehavior *behavior)
{
	this->behavior = behavior;
}