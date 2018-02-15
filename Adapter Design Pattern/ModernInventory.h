#ifndef _MODERNINVENTORY_H_
#define _MODERNINVENTORY_H_

#include "CrappyArrayInventory.h"

class ModernInventory 
{
public:
	ModernInventory();
	Item* getItem(int);
	const int getItemAmount() const;
protected:
	CrappyArrayInventory* pCrap;
};

#endif /* _MODERNINVENTORY_H_ */