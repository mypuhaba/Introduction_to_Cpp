#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
  cin >> num;
  string *names = new string[num];

  for (int i = 0; i < num; ++i) {
    cout << "�̸� �Է� #" << i + 1 << ": ";
    cin >> names[i];
  }
  cout << '\n';
  cout << "������ �̸� ����Դϴ�.\n";
  for (int i = 0; i < num; ++i)
    cout << "�̸�#" << i + 1 << ": " << names[i] << endl;

  delete[] names;
}