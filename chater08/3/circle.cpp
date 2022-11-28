#include <iostream>
using namespace std;

class Circle {
 public:
  Circle() { radius_ = 0; }
  void set_radius(const int& radius) { radius_ = radius; }
  double GetArea() const;

private:
  int radius_;
 const double kPI = 3.14;
};

double Circle::GetArea() const { return kPI * radius_ * radius_; }

int main() {
  int num;
  int count = 0;

  cout << "생성할 원의 개수: ";
  cin >> num;
  Circle* circle = new Circle[num];
  for (int i = 0; i < num; ++i) {
    int r = rand() % 100 + 1;
    circle[i].set_radius(r);
    cout << "원" << i + 1 << "의 반지름 >> " << r << endl;
    if (circle[i].GetArea() > 100.0) ++count;
  }
  cout << "면적이 100보다 큰 원은 " << count << "개 입니다.\n";
  delete[] circle;
}