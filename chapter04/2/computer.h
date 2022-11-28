#include <iostream>
using namespace std;

class Computer
{
	string name;
	int RAM;
	double cpu_speed;
public:
	void setComputer(string name, int RAM, double cpu_speed);
	void print();
};