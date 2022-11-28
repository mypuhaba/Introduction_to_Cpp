#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
	string name_;
	double marks_;

	//Student() : name_{ "" }, marks_{ 0 } {}
	Student(const string& name, const double& marks) : name_{ name }, marks_{ marks } {}
	void Print() const { cout << "�̸�: " << name_ << endl << "����: " << marks_ << endl; }
	
};

bool CompareMarks(const Student& m1, const Student& m2) { return m1.marks_ < m2.marks_; }

int main()
{
	vector<Student> student;
	student.push_back({ "������", 4.3 });
	student.push_back({ "��ö��", 3.9 });
	student.push_back({ "�迵��", 3.8 });

	sort(student.begin(), student.end(), CompareMarks);

	cout << "======================\n";
	for (auto& e : student) e.Print();
	cout << "======================\n";
}