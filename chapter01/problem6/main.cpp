#include <iostream>

int main()
{
	int hours, minutes, seconds;

	std::cout << "��: ";
	std::cin >> hours;
	std::cout << "��: ";
	std::cin >> minutes;
	std::cout << "��: ";
	std::cin >> seconds;

	minutes += 60 * hours;
	seconds += 60 * minutes;

	std::cout << "��ü ��: " << seconds << std::endl;
}