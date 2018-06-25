#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "EnemyPool.h"

int Spider::created = 0;

int main(int argc, char **argv)
{
	//initialize random number generator
	srand(time(NULL));
	
	EnemyPool pool;
	pool.create();
	pool.create();
	
	std::cout << "Attack wave 1 (2 new spiders):" << std::endl;
	pool.animate();
	
	pool.create();
	pool.create();
	pool.create();
	
	std::cout << "Attack wave 2 (3 new spiders):" << std::endl;
	pool.animate();
	
	pool.create();
	pool.create();
	
	std::cout << "Attack wave 3 (2 new spiders):" << std::endl;
	pool.animate();
	
	return 0;
}
