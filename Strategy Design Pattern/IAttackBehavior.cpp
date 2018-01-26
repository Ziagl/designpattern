#include <iostream>
#include "IAttackBehavior.h"

void AxeAttack::performAttack(Character *attacker, Character* enemy)
{
	cout << attacker->getName() << " crushes " << enemy->getName() << endl;
};

void SwordAttack::performAttack(Character *attacker, Character* enemy)
{
	cout << attacker->getName() << " slashes " << enemy->getName() << endl;
}

void FireAttack::performAttack(Character *attacker, Character* enemy)
{
	cout << attacker->getName() << " scorches " << enemy->getName() << endl;
}