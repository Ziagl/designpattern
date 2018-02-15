#include "ModernInventory.h"

ModernInventory::ModernInventory() 
{
	pCrap = new CrappyArrayInventory();
}

Item* ModernInventory::getItem(int index) 
{
	if (index > pCrap->getInventorySize())
		return NULL;
	else
		return &pCrap->getInventory()[index];
}

const int ModernInventory::getItemAmount() const 
{
	return pCrap->getInventorySize();
}