#include <iostream>
using namespace std;

class Time
{
	int hour, minute, second;
public:
	void setTime(const int& h, const int& m, const int& s);
	void print() const;
};