#include "dice.h"



int Dice::roll()
{
	
	face = (int)(rand() % 6 + 1);
	return face;
}