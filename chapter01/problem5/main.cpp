#include <iostream>

int main()
{
	const double meter_per_pyeong = 3.3058;
	double pyeong;
	std::cout << "평: ";
	std::cin >> pyeong;
	std::cout << "평방미터: " << pyeong * meter_per_pyeong << std::endl;
}