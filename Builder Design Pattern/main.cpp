#include <stdio.h>
#include "HeroBuilder.h"

int main(int argc, char **argv)
{
	HeroBuilder *herobuilder = new HeroBuilder();
	Hero hero1 = herobuilder->buildWarrior();
	Hero hero2 = herobuilder->buildWizard();
	
	hero1.showItems();
	hero2.showItems();
	
	return 0;
}
