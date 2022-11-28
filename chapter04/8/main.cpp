#include "complex.h"

int main()
{
	Complex a;
	a.r = 5; a.i = 3;

	Complex b;
	b.r = 3; b.i = -4;

	a.print(); b.print();
}