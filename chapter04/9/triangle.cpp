#include "triangle.h"

void Triangle::init(int b, int h) { base = b; height = h; }

int Triangle::area() { return base * height / 2; }

void Triangle::print() {
	cout << "�غ��� " << base << "�̰� " << "���̰� " << height << "�� �ﰢ���� ����: "
		<< area();
}