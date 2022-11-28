#include <iostream>
using namespace std;

class CellPhone
{
	bool on_;
	string number_;
	string model_;
	string color_;
public:
	void getPhone(string number, string model, string color);
	void setOn();
	void print();
};