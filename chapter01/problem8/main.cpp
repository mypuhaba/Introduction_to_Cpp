#include <iostream>

int main()
{
	int quiz1, quiz2, quiz3, midterm, final;
	std::cout << "���� #1 ����: ";
	std::cin >> quiz1;
	std::cout << "���� #2 ����: ";
	std::cin >> quiz2;
	std::cout << "���� #3 ����: ";
	std::cin >> quiz3;
	std::cout << "�߰���� ����: ";
	std::cin >> midterm;
	std::cout << "�⸻��� ����: ";
	std::cin >> final;
	std::cout << "=======================\n";
	std::cout << "���� ����: " << quiz1 + quiz2 + quiz3 + midterm + final << std::endl;
	std::cout << "=======================\n";

}