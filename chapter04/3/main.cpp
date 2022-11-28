#include "sum.h"

int main()
{
	Sum obj;
	int n1, n2;
	cout << "첫 번째 정수: ";
	cin >> n1;
	cout << "두 번째 정수: ";
	cin >> n2;
	obj.init(n1, n2);
	cout << "연산 결과: " << obj.add() << endl;
	
}