#include "Character.h"

string Character::getName() {
	return this->name;
}

void Character::setName(string name) {
	this->name = name;
}

double Character::getDamage() {
	return this->damage;
}

void Character::setDamage(double damage) {
	this->damage = damage;
}