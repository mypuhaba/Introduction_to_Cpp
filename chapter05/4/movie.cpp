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
		cout << "영화 제목: " << title << endl;
		cout << "영화 감독: " << director << endl;
		cout << "영화 평점: " << rating << endl;
		cout << '\n';
	}
};

int main()
{
	Movie n1{ "타이타닉", "제임스 키메론", 9.5 },
		n2{ "지오스톰", "딘 데블린", 8.34 };
	
	n1.print();
	n2.print();
}