#include "time.h"

void Time::setTime(const int& h, const int& m, const int& s)
{
	hour = h; minute = m, second = s;
}

void Time::print() const {
	cout << cout.fill('0') << hour << ':'
		<< minute << ':' << cout.fill('0') << second;
}