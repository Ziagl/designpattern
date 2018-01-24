#include <stdio.h>
#include "CharacterFactory.h"
#include "Character.h"

int main(int argc, char **argv)
{
	Character *player = CharacterFactory::create(1);
	Character *orc = CharacterFactory::create(2);
	Character *dragon = CharacterFactory::create(3);
	
	orc->attack(player);
	player->attack(orc);
	dragon->attack(player);
	
	return 0;
}
