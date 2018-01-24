#include <iostream>
#include "Dragon.h"

void Dragon::attack(Character* enemy) {
	std::cout << "Dragon " << this->getName() << " attacks " << 
	enemy->getName() << " with " << this->getDamage() << " damage." << 
	std::endl;
}