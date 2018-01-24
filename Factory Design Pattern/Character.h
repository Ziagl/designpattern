#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>
using namespace std;

class Character
{
	protected:
		string name;
		double damage;
	public:
		virtual void attack(Character*) = 0;
		void setName(string);
		string getName();
		void setDamage(double);
		double getDamage();
};

#endif /* _CHARACTER_H_ */