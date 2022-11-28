#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size;
	int num;

	cout << "정수의 개수: ";
	cin >> size;

	vector<int> v(size);

	for (auto& e : v)
	{
		cout << "정수를 입력하시오: ";
		cin >> num;
		v.push_back(num);
	}

	int max = v[0], min = v[0];
	for (unsigned int i = 0; i < v.size(); ++i)
	{ 
		if (max < v[i]) max = v[i];
		if (min > v[i]) min = v[i];
	}

	cout << "최대값: " << max;
	cout << "최소값: " << min;
}