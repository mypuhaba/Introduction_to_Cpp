#include <iostream>
#include <math.h>

int main()
{
	double first_edge, second_edge, hypotenuse;
	std::cout << "ù ��° ��: ";
	std::cin >> first_edge;
	std::cout << "�� ��° ��: ";
	std::cin >> second_edge;
	hypotenuse = sqrt(first_edge * first_edge + second_edge * second_edge);
	std::cout << "���� ����: " << hypotenuse << std::endl;
}