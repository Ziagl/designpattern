#ifndef _CRAPPYARRAYINVENTORY_H_
#define _CRAPPYARRAYINVENTORY_H_

#include <string>

struct Item 
{
	std::string name;
	int value;
};

class CrappyArrayInventory 
{
public:
	CrappyArrayInventory();
	Item* getInventory();
	int getInventorySize();
private:
	Item* items;
};

#endif /* _CRAPPYARRAYINVENTORY_H_ */