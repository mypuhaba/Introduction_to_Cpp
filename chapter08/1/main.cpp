#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "�� ���� ������ �Է��մϱ�? ";
  cin >> num;
  int* p = new int[num];
  for (int i = 0; i < num; ++i) {
    cout << "������ �Է��ϼ���: ";
    cin >> p[i];
  }
  cout << "�Էµ� ������: ";
  for (int i = 0; i < num; ++i) {
    if (i != num - 1)
      cout << p[i] << ", ";
    else
      cout << p[i] << endl;
    }
  delete[] p;
}