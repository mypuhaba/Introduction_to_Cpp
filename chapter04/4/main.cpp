#include "book.h"

int main()
{
	Book obj;
	obj.title = "Great C++";
	obj.author = "Bob";
	cout << "책 이름: " << obj.title << endl;
	cout << "책 저자: " << obj.author << endl;
}