#include "employee.h"

void Employee::init(string n, int a, int s) { name = n; age = a; salary = s; }

void Employee::print()
{
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
}