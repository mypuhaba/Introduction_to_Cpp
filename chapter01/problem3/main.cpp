#include <iostream>
#include <math.h>

int main()
{
	double first_edge, second_edge, hypotenuse;
	std::cout << "첫 번째 변: ";
	std::cin >> first_edge;
	std::cout << "두 번째 변: ";
	std::cin >> second_edge;
	hypotenuse = sqrt(first_edge * first_edge + second_edge * second_edge);
	std::cout << "빗변 길이: " << hypotenuse << std::endl;
}