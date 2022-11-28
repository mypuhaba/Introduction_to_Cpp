#include <iostream>
using namespace std;

class Book
{
	string title;
	string author;
public:
	Book() {}
	Book(const string& t, const string& a) : title(t), author(a)
	{
		cout << "å �̸�: " << title << endl;
		cout << "å ����: " << author << endl;
	}
	~Book() {}
	string getAuthor() { return author; }
	string getTitle() { return title; }
	void setAuthor(const string& a) { author = a; }
	void setTitle(const string& t) { title = t; }
};

int main()
{
	Book book{ "0","0" };
	book.setTitle("More Great C++\n");
	cout << book.getTitle() << endl;
}