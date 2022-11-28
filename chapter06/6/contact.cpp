#include <iostream>
#include <vector>
using namespace std;

class Contact
{
public:
	string name_, tel_;
	Contact() : name_{ "" }, tel_{ "" }
	{
		cout << "이름을 입력하시오: ";
		cin >> name_;
		cout << "전화번호를 입력하시오: ";
		cin >> tel_;
	}
	//Contact(const string& name, const string& tel) : name_(name), tel_(tel) {}
};

void SearchByName(const vector<Contact>& c)
{
	string name;
	cout << "탐색하고 싶은 이름을 입력하시오 : ";
	cin >> name;
	for (auto& e : c)
		if (e.name_ == name) { cout << "전화번호 : " << e.tel_ << endl; return; }
	cerr << "No Data!\n";
}

int main()
{
	vector<Contact> v(3);
	SearchByName(v);
}