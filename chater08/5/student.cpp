#include <iostream>
using namespace std;

class Student {
 public:
  Student(const string& name = "") : name_(name) {}
  string get_name() const { return name_; }
  void set_name(const string& name) { name_ = name; }

 private:
  string name_;
};

class MyClass {
 public:
  MyClass() : class_name_{""}, student_{nullptr}, size_{0} {}
  MyClass(const string& name, Student* student, const int& size)
      : class_name_(name), student_(student), size_(size) {}
  ~MyClass() {}
  void PrintStudentList() const;
  int get_size() const { return size_; }
  void set_size(const int& size) { size_ = size; }

 //private:
  string class_name_;
  Student* student_;
  int size_;
};

void MyClass::PrintStudentList() const {
  cout << "학급 " << class_name_ << "의 학생들은 다음과 같다\n";
  for (auto i = 0; i < size_; ++i)
    cout << "학생 #" << i + 1 << ": " << student_[i].get_name() << endl;
}

int main() { 
  Student* students = new Student[3];
  students[0].set_name("홍길동");
  students[1].set_name("김철수");
  students[2].set_name("최자영");
  MyClass special{"special", students, 3};
  special.PrintStudentList();
  delete[] students;
}