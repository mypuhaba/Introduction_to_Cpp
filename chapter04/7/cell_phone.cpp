#include "cell_phone.h"

void CellPhone::getPhone(string number, string model, string color)
{
	number_ = number; model_ = model; color_ = color;
}

void CellPhone::setOn() { if (!on_) { on_ = true; } }

void CellPhone::print()
{
	cout << number_ << endl;
	cout << model_ << endl;
	cout << color_ << endl;
	if (on_) { cout << "True" << endl; }
}