#include <iostream>
using namespace std;

class Box
{
	double length;
	double width;
	double height;
public:
	double getVolume();
	double getHeight();
	void setHeight(double h);
	double getLength();
	void setLength(double l);
	double getWidth();
	void setWidth(double w);
};
