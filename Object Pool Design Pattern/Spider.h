#ifndef _SPIDER_H_
#define _SPIDER_H_

#include <string>
using namespace std;

class Spider
{
public:
	Spider() : hitpoints(0.0) { this->counter = ++created; }
	void init(string name, double hitpoints, double damage) { this->name = name; this->hitpoints = hitpoints; this->damage = damage; }
	void attack();
	bool isAlive() const { return hitpoints > 0; }
	void getDamage(int damage);
	
	static int created;
private:
	string name;
	int counter;
	double damage;
	double hitpoints;
};

#endif /* _SPIDER_H_ */