#include "CharacterFactory.h"
#include "Player.h"
#include "Orc.h"
#include "Dragon.h"

Character* CharacterFactory::create(int type) {
	Character *character = NULL;
	
	switch(type) {
		case 1:{
			character = new Player;
			character->setName("Gandalf");
			character->setDamage(10.0);
			break;
		}
		case 2:{
			character = new Orc;
			character->setName("Urbul");
			character->setDamage(5.0);
			break;
		}
		case 3:{
			character = new Dragon;
			character->setName("Bymarth, The Deathlord");
			character->setDamage(500.0);
			break;
		}
		default:{
			return NULL;
		}
	}

	return character;
}