#include <iostream>

int main()
{
	const double meter_per_pyeong = 3.3058;
	double pyeong;
	std::cout << "��: ";
	std::cin >> pyeong;
	std::cout << "������: " << pyeong * meter_per_pyeong << std::endl;
}