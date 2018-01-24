#include <iostream>
#include "Orc.h"

void Orc::attack(Character* enemy) {
	std::cout << "Orc " << this->getName() << " attacks " << 
	enemy->getName() << " with " << this->getDamage() << " damage." << 
	std::endl;
}