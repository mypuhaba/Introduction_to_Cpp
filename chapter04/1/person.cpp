#include "person.h"


void Person::setPerson(string name, int age) {
	this->name = name; this->age = age;
}

void Person::print() {
	cout << "이름: " << name << '\n' << "나이: " << age << std::endl;
}