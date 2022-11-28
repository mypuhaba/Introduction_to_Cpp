#include <iostream>
#include <string>

int main()
{	
	std::string subject, verb, object;
	std::cout << "주어: ";
	std::cin >> subject;
	std::cout << "동사: ";
	std::cin >> verb;
	std::cout << "목적어: ";
	std::cin >> object;
	std::cout << subject << " " << verb << " a " << object << "." << std::endl;
}