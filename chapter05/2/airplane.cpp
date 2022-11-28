#include <iostream>
using namespace std;

class Airplane
{
	string name;
	int capacity;
	int speed;
	static int count;
public:
	Airplane(const string& n, const int& c, const int& s)
		:name(n), capacity(c), speed(s)
	{
		++count;
	}
	~Airplane() { --count; }

	string getName() { return name; }
	int getCapacity() { return capacity; }
	int getSpeed() { return speed; }

	void setName(const string& n) { name = n; }
	void setCapacity(const int& c) { capacity = c; }
	void setSpeed(const int& s) { speed = s; }

	void print()
	{ 
		cout << "비행기 #" << count << endl;
		cout << "비행기의 이름: " << name << endl;
		cout << "비행기의 용량: " << capacity << endl;
		cout << "비행기의 속도: " << speed << "Km/h\n" << endl;
	}
};

int Airplane::count = 0;

int main()
{
	Airplane n1{ "보잉 797", 900, 300 };
	n1.print();
	Airplane n2{ "에어버스 350", 400, 1000 };
	n2.print();

}