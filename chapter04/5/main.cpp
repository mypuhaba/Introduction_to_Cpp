#include "dice.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	Dice obj;
	cout << "�ֻ��� ��: " << obj.roll() << endl;
	cout << "�ֻ��� ��: " << obj.roll() << endl;
}