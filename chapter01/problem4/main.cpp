#include <iostream>

int main()
{
	int length, width, height;
	
	std::cout << "길이: ";
	std::cin >> length;
	std::cout << "너비: ";
	std::cin >> width;
	std::cout << "높이: ";
	std::cin >> height;
	std::cout << "상자의 부피: " << length * width * height << std::endl;
	std::cout << "상자의 표면적: " << 2 * (length * width + length * height + height * width)
		<< std::endl;
}