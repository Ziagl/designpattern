#include <iostream>
#include "Player.h"

void Player::attack(Character* enemy) {
	std::cout << "Player " << this->getName() << " attacks " << 
	enemy->getName() << " with " << this->getDamage() << " damage." << 
	std::endl;
}