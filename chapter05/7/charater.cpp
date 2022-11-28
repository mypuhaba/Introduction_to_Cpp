#include <iostream>
using namespace std;

class Character
{
public:
	Character() { x_ = 0; y_ = 0; hp_ = 100; }
	Character(const int& x, const int& y) : x_(x), y_(y) {}

	const int& get_x_() { return x_; }

	void set_x_(const int& x) { x_ = x; }

	void Print();

private:
	int x_, y_;
	double hp_;
};

void Character::Print()
{
	cout << "x: " << x_ << " y: " << y_ << " HP: " << hp_ << endl;
}

int main()
{
	Character n;
	cout << "Ä³¸¯ÅÍ #1" << endl;
	while (n.get_x_() <= 90) { n.Print(); n.set_x_(n.get_x_() + 10); }
}