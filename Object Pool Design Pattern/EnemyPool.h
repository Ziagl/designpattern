#ifndef _ENEMYPOOL_H_
#define _ENEMYPOOL_H_

#include "Spider.h"

class EnemyPool
{
public:
	void create();
	void animate();
private:
	static const int POOL_SIZE = 1000;
	Spider spiders[POOL_SIZE];
};

#endif /* _ENEMYPOOL_H_ */