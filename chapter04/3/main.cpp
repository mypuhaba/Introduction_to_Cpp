#include "sum.h"

int main()
{
	Sum obj;
	int n1, n2;
	cout << "ù ��° ����: ";
	cin >> n1;
	cout << "�� ��° ����: ";
	cin >> n2;
	obj.init(n1, n2);
	cout << "���� ���: " << obj.add() << endl;
	
}