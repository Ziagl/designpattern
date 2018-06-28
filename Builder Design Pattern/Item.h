#ifndef _ITEM_H_
#define _ITEM_H_

#include <string>
#include <iostream>

using namespace std;

class Item
{
public:
	Item(string name, int power, float cost) : name(name), power(power), cost(cost) {}
	void printStats() {
		cout << "Item: " << name << " " << power << " " << cost << endl;
	}
private:
	string name;
	int power;
	float cost;
};

class Sword : public Item {
public:
	Sword(string name, int power, float cost) : Item(name, power, cost) {}
};

class Shield : public Item {
public:
	Shield(string name, int power, float cost) : Item(name, power, cost) {}
};

class MagicWand : public Item {
public:
	MagicWand(string name, int power, float cost) : Item(name, power, cost) {}
};

class Spellbook : public Item {
public:
	Spellbook(string name, int power, float cost) : Item(name, power, cost) {}
};

class Dagger : public Item {
public:
	Dagger(string name, int power, float cost) : Item(name, power, cost) {}
};

class Bow : public Item {
public:
	Bow(string name, int power, float cost) : Item(name, power, cost) {}
};

#endif /* _ITEM_H_ */