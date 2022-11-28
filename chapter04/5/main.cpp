#include "dice.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	Dice obj;
	cout << "주사위 값: " << obj.roll() << endl;
	cout << "주사위 값: " << obj.roll() << endl;
}