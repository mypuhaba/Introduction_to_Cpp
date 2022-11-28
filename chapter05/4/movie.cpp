#include <iostream>
using namespace std;

class Movie
{
	string title;
	string director;
	double rating;
public:
	Movie() {}
	Movie(const string& t, const string& d, const float& r)
		: title(t), director(d), rating(r) {}
	~Movie() {}

	string getTitle() { return title; }
	string getDirector() { return director; }
	double getRating() { return rating; }

	void setTitle(const string& t) { title = t; }
	void setDirector(const string& d) { director = d; }
	void setRating(const double& r) { rating = r; }

	void print()
	{
		cout << "��ȭ ����: " << title << endl;
		cout << "��ȭ ����: " << director << endl;
		cout << "��ȭ ����: " << rating << endl;
		cout << '\n';
	}
};

int main()
{
	Movie n1{ "Ÿ��Ÿ��", "���ӽ� Ű�޷�", 9.5 },
		n2{ "��������", "�� ����", 8.34 };
	
	n1.print();
	n2.print();
}