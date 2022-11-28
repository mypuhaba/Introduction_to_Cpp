#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "몇 개의 정수를 입력합니까? ";
  cin >> num;
  int* p = new int[num];
  for (int i = 0; i < num; ++i) {
    cout << "정수를 입력하세요: ";
    cin >> p[i];
  }
  cout << "입력된 정수는: ";
  for (int i = 0; i < num; ++i) {
    if (i != num - 1)
      cout << p[i] << ", ";
    else
      cout << p[i] << endl;
    }
  delete[] p;
}