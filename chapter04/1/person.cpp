#include "person.h"


void Person::setPerson(string name, int age) {
	this->name = name; this->age = age;
}

void Person::print() {
	cout << "�̸�: " << name << '\n' << "����: " << age << std::endl;
}