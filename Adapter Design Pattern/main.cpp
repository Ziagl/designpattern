#include <iostream>
#include "ModernInventory.h"

using namespace std;

int main(int argc, char **argv)
{
	ModernInventory* inventory = new ModernInventory();
	cout << "There are " << inventory->getItemAmount() << " items in your inventory" << endl;
	Item* item = inventory->getItem(1);
	cout << "You took your " << item->name << " with power of " << item->value << endl;
	//damn, wrong item
	item = inventory->getItem(0);
	cout << "You took your " << item->name << " with power of " << item->value << endl;
	return 0;
}
