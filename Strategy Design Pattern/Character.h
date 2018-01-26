#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>
#include "IAttackBehavior.h"
using namespace std;

class IAttackBehavior;

class Character 
{
	protected:
		string name;
		double damage;
		IAttackBehavior* behavior;
	public:
		//Constructor
		Character(string name, double damage) : name(name), damage(damage), behavior(0) {}
		
		void attack(Character *enemy);
		void setAttackBehavior(IAttackBehavior* behavior);
		
		const string& getName() const { return this->name; }
		void setDamage(double damage) { this->damage = damage; }
		double getDamage() const { return this->damage; }
};

class Player : public Character
{
	public:
		Player(string name, double damage) : Character(name, damage) { }
		
		void networking()
		{
			//nothing to do now
		}
};

#endif /* _CHARACTER_H_ */