#include "box.h"

int main()
{
	Box box;
	box.setLength(6);
	box.setWidth(7);
	box.setHeight(5);
	cout << '[' << box.getLength() << ", " << box.getWidth() << ", "
		<< box.getHeight() << ']' << endl;

	cout << "상자의 부피: " << box.getVolume();
}