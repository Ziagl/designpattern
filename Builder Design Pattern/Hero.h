#ifndef _HERO_H_
#define _HERO_H_

#include "Item.h"
#include <list>
#include <string>

class Hero
{
public:
	Hero(string name, int strength, int dexterity, int willpower) : name(name), strength(strength), dexterity(dexterity), willpower(willpower) {};
	void showItems();
	void addItem(Item item);
private:
	std::list<Item> inventory;
	int strength;
	int dexterity;
	int willpower;
	string name;
};

#endif /* _HERO_H_ */