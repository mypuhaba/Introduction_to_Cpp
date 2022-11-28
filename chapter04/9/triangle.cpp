#include "triangle.h"

void Triangle::init(int b, int h) { base = b; height = h; }

int Triangle::area() { return base * height / 2; }

void Triangle::print() {
	cout << "밑변이 " << base << "이고 " << "높이가 " << height << "인 삼각형의 면적: "
		<< area();
}