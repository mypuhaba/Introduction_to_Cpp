#include <iostream>
#include <string>

int main()
{	
	std::string subject, verb, object;
	std::cout << "�־�: ";
	std::cin >> subject;
	std::cout << "����: ";
	std::cin >> verb;
	std::cout << "������: ";
	std::cin >> object;
	std::cout << subject << " " << verb << " a " << object << "." << std::endl;
}