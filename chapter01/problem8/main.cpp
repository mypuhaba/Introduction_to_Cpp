#include <iostream>

int main()
{
	int quiz1, quiz2, quiz3, midterm, final;
	std::cout << "퀴즈 #1 성적: ";
	std::cin >> quiz1;
	std::cout << "퀴즈 #2 성적: ";
	std::cin >> quiz2;
	std::cout << "퀴즈 #3 성적: ";
	std::cin >> quiz3;
	std::cout << "중간고사 성적: ";
	std::cin >> midterm;
	std::cout << "기말고사 성적: ";
	std::cin >> final;
	std::cout << "=======================\n";
	std::cout << "성적 총합: " << quiz1 + quiz2 + quiz3 + midterm + final << std::endl;
	std::cout << "=======================\n";

}