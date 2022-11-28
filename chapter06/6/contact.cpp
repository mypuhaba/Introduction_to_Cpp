#include <iostream>
#include <vector>
using namespace std;

class Contact
{
public:
	string name_, tel_;
	Contact() : name_{ "" }, tel_{ "" }
	{
		cout << "�̸��� �Է��Ͻÿ�: ";
		cin >> name_;
		cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
		cin >> tel_;
	}
	//Contact(const string& name, const string& tel) : name_(name), tel_(tel) {}
};

void SearchByName(const vector<Contact>& c)
{
	string name;
	cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
	cin >> name;
	for (auto& e : c)
		if (e.name_ == name) { cout << "��ȭ��ȣ : " << e.tel_ << endl; return; }
	cerr << "No Data!\n";
}

int main()
{
	vector<Contact> v(3);
	SearchByName(v);
}