#include <iostream>

int main()
{
	int length, width, height;
	
	std::cout << "����: ";
	std::cin >> length;
	std::cout << "�ʺ�: ";
	std::cin >> width;
	std::cout << "����: ";
	std::cin >> height;
	std::cout << "������ ����: " << length * width * height << std::endl;
	std::cout << "������ ǥ����: " << 2 * (length * width + length * height + height * width)
		<< std::endl;
}