#include <iostream>
using namespace std;

class Employee
{
	string name;
	int age;
	int salary;
public:
	void init(string n, int a, int s);
	void print();
};