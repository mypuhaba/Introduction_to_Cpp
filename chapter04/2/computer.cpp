#include "computer.h"

void Computer::setComputer(string name, int RAM, double cpu_speed)
{
	this->name = name;
	this->RAM = RAM;
	this->cpu_speed = cpu_speed;
}

void Computer::print()
{
	cout << "�̸�: " << name << endl;
	cout << "RAM: " << RAM << endl;
	cout << "CPU �ӵ�" << cpu_speed << endl;
}