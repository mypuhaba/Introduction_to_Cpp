#include <iostream>
using namespace std;

class Time {
 public:
  Time() {}
  Time(int hour, int min, int sec) : hour_(hour), min_(min), sec_(sec) {}
  ~Time() {}
  int get_hour() const { return hour_; }
  int get_min() const { return min_; }
  int get_sec() const { return sec_; }
  void set_hour(const int& hour) { hour_ = hour; }
  void set_min(const int& min) { min_ = min; }
  void set_sec(const int& sec) { sec_ = sec; }
  void Print() const;

 private:
  int hour_, min_, sec_;
};

void Time::Print() const {
  cout << "Time 객체:" << hour_ << ":" << min_ << ":" << sec_ << endl;
}

bool IsEqual(const Time& t1, const Time& t2) {
  return (t1.get_hour() == t2.get_hour()) && (t1.get_min() == t2.get_min()) &&
         (t1.get_sec() == t2.get_sec());
}

bool IsEqual(const Time* const t1, const Time* const t2) {
  return (t1->get_hour() == t2->get_hour()) &&
         (t1->get_min() == t2->get_min()) && (t1->get_sec() == t2->get_sec());
}

int main() { 
  Time t1{12, 11, 33}, t2{12, 11, 33};
  t1.Print();
  t2.Print();
  if (IsEqual(t1, t2)) cout << "시간이 일치합니다\n";
  if (IsEqual(&t1, &t2)) cout << "시간이 일치합니다\n";
}