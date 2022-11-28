#include <iostream>
#include <math.h>

int main()
{
	double radius, area, volume;
	const double kPi = 3.14;

	std::cout << "반지름: ";
	std::cin >> radius;
	area = 4 * kPi * pow(radius, 2);
	volume = 4 * kPi * pow(radius, 3) / 3;
	std::cout << "표면적: " << area << std::endl;
	std::cout << "부피: " << volume << std::endl;
}