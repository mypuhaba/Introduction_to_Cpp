#include <iostream>
using namespace std;

class Box
{
	int length, width, height, num;
public:
	Box() { }
	Box(const int& l, const int& w, const int& h, const int& n)
		: length(l), width(w), height(h), num(n) { }
	~Box() { }

	int getLength() { return length; }
	int getWidth() { return width; }
	int getHeight() { return height; }

	void setLength(const int& l) { length = l; }
	void setWidth(const int& w) { width = w; }
	void setHeight(const int& h) { height = h; }

	int getVolume() { return length * width * height; }

	bool isEmpty() { if (!getVolume()) return true; }

	void print() 
	{
		cout << "상자 #" << num << endl;
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolume() << endl;
		if (isEmpty()) cout << "상자가 비어 있음\n";
		cout << '\n';
	}
};

int main()
{
	Box n1{ 0,0,0,1 };
	n1.print();

	Box n2{ 3,2,4,2 };
	n2.print();
}