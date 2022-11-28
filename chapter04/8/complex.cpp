#include "complex.h"

void Complex::print()
{
	std::cout << r;
	if (i > 0) cout << " + " << i << 'i';
	else if (i < 0) {
		i = -i;
		cout << " - " << i << 'i';
	}
	cout << endl;
}