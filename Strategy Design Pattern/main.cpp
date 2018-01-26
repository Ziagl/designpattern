#include "Character.h"

int main(int argc, char **argv)
{
	Character orc("Urbul", 5.0);
	AxeAttack axe;
	orc.setAttackBehavior(&axe);
	
	Character dragon("Bymarth, The Deathlord", 500.0);
	FireAttack fire;
	dragon.setAttackBehavior(&fire);
	
	Player player("Gandalf", 10.0);
	SwordAttack sword;
	player.setAttackBehavior(&sword);
	
	orc.attack(&player);
	dragon.attack(&player);
	
	player.attack(&dragon);
	
	//the dragon is hard to defeat -> switch weapon on runtime
	player.setAttackBehavior(&axe);
	player.attack(&dragon);
	
	return 0;
}
