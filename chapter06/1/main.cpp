#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size;
	int num;

	cout << "������ ����: ";
	cin >> size;

	vector<int> v(size);

	for (auto& e : v)
	{
		cout << "������ �Է��Ͻÿ�: ";
		cin >> num;
		v.push_back(num);
	}

	int max = v[0], min = v[0];
	for (unsigned int i = 0; i < v.size(); ++i)
	{ 
		if (max < v[i]) max = v[i];
		if (min > v[i]) min = v[i];
	}

	cout << "�ִ밪: " << max;
	cout << "�ּҰ�: " << min;
}