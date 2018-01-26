#ifndef _IATTACKBEHAVIOR_H_
#define _IATTACKBEHAVIOR_H_

#include "Character.h"

class Character;

class IAttackBehavior
{
	public:
		virtual void performAttack(Character* attacker, Character* enemy) = 0;
};

class AxeAttack : public IAttackBehavior
{
	public:
		virtual void performAttack(Character* attacker, Character* enemy);
};

class SwordAttack : public IAttackBehavior
{
	public:
		virtual void performAttack(Character* attacker, Character* enemy);
};

class FireAttack : public IAttackBehavior
{
	public:
		virtual void performAttack(Character* attacker, Character* enemy);
};

#endif /* _IATTACKBEHAVIOR_H_ */