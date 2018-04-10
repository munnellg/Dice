#ifndef _DICE_H_
#define _DICE_H_

enum dice_type { D, Z };

int dice_init ( void );
int dice_roll ( int num_dice, enum dice_type type, int max_roll  );

#endif