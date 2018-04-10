#include "dice.h"
#include <stdio.h>
#include <stdlib.h>

struct player {
	int skill, max_skill;
	int stamina, max_stamina;
	int luck, max_luck;
};

void
gen_player ( struct player *p ) {
	p->max_skill = p->skill = 6 + dice_roll(1, D, 6);
	p->max_stamina = p->stamina = 12 + dice_roll(2, D, 6);
	p->max_luck = p->luck = 6 + dice_roll(1, D, 6);
}

int
main ( int argc, char *argv[] ) {
	struct player p;

	dice_init();

	gen_player(&p);
	printf("SKILL: %d\n", p.skill);
	printf("STAMINA: %d\n", p.stamina);
	printf("LUCK: %d\n", p.luck);

	return EXIT_SUCCESS;
}