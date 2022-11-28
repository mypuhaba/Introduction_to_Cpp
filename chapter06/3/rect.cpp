#include <iostream>
#include <vector>
using namespace std;

class Rect
{
public:
	int width_, height_;
	Rect() : width_{ 0 }, height_{ 0 } {}
	Rect(const int& width, const int& height) : width_(width), height_(height) {}
	const int& area() const { return width_ * height_; }
	void Print() const { cout << "(" << width_ << ", " << height_ << ")" << endl; }
};

int main()
{
	int size;
	cout << "사각형의 개수: ";
	cin >> size;
	vector<Rect> rect(size);
	for(auto& e : rect)
	{
		cout << "사각형의 폭: ";
		cin >> e.width_;
		cout << "사각형의 높이: ";
		cin >> e.height_;
	}

	for (auto& e : rect) if (e.area() > 100) e.Print();
}