#include <string>
#include <stdlib.h>
#include "EnemyPool.h"

void EnemyPool::create() {
	//find dead spider
	for(int i = 0; i < POOL_SIZE; ++i) {
		if(spiders[i].isAlive() == false) {
			spiders[i].init("Spider", 50.0, rand() % 10 + 1);
			break;
		}
	}
}

void EnemyPool::animate() {
	for(int i = 0; i < POOL_SIZE; ++i) {
		if(spiders[i].isAlive()) {
			spiders[i].attack();
			spiders[i].getDamage(rand() % 100 + 1);
		}
	}}