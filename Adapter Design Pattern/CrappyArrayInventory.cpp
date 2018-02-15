#include "CrappyArrayInventory.h"

CrappyArrayInventory::CrappyArrayInventory()
{
	//create some items
	Item* array = new Item[2];
	
	Item* item = new Item();
	item->name = "Sword";
	item->value = 100;
	array[0] = *item;
	
	item = new Item();
	item->name = "Shield";
	item->value = 50;
	array[1] = *item;
	
	this->items = array;
}

Item* CrappyArrayInventory::getInventory()
{
	return this->items;
}

int CrappyArrayInventory::getInventorySize()
{
	return 2;
}