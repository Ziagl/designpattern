#include <iostream>
#include "Spider.h"

void Spider::attack() {
	std::cout << this->name << this->counter << " hits Player with " << this->damage <<" damage." << std::endl;
}

void Spider::getDamage(int damage) {
	this->hitpoints-=damage;
	std::cout << this->name << this->counter << " gets " << damage <<" damage." << std::endl;
	if(this->hitpoints < 0)
		std:cout << this->name << this->counter << " dies" << std::endl; 
}