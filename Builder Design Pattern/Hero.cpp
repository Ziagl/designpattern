#include "Hero.h"
#include <iostream>

void Hero::addItem(Item item) {
	inventory.push_back(item);
}

void Hero::showItems() {
	std::cout << name << " Inventory: " << std::endl;
	for (std::list<Item>::iterator it = inventory.begin(); it != inventory.end(); it++)
		(*it).printStats();
}