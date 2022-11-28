#include <iostream>

int main()
{
	int hours, minutes, seconds;

	std::cout << "시: ";
	std::cin >> hours;
	std::cout << "분: ";
	std::cin >> minutes;
	std::cout << "초: ";
	std::cin >> seconds;

	minutes += 60 * hours;
	seconds += 60 * minutes;

	std::cout << "전체 초: " << seconds << std::endl;
}