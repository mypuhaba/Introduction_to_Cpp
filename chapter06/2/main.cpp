#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool Compare(const string& s1, const string& s2) { return s1 < s2; }

int main()
{
	int size;
	string s;

	cout << "���ڿ��� ����: ";
	cin >> size;

	vector<string> v(size);

	for (auto& e : v)
	{
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), Compare);

	for (auto p = v.begin(); p != v.end(); ++p)
		cout << *p << endl;
}