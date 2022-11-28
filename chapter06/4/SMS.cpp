#include <iostream>
#include <vector>
using namespace std;

class SMS
{
public:
	string sender_, receiver_, text_;

	//SMS() { sender_ = ""; receiver_ = ""; text_ = ""; }
	SMS(const string& sender, const string& receiver, const string& text) :
		sender_(sender), receiver_(receiver), text_(text) {}

	void Print() const
	{
		cout << "�߽���: " << sender_ << " ������: " << receiver_
			<< " ����: " << text_ << endl;
	}
};

int main()
{
	cout << "[ �������� ��ü �迭 ��� ]\n";
	SMS SMS_array[3]{ 
		SMS{"010-1234-5678", "010-1234-5679", "C++ ���δ� �ߵŰ�����?"},
		SMS{"010-1234-5679", "010-1234-5678", "�� 5������� �������׿�."},
		SMS{"010-1234-5676", "010-1234-5678", "���ͺ��� �ð��� �ɸ��׿�."}
	};

	for (auto& e : SMS_array) e.Print();
	cout << endl;

	cout << "[ ���� ��ü ���� ]\n";
	vector<SMS> SMS_vector;
	SMS_vector.push_back({ "010-1234-5678", "010-1234-5679", "C++ ���δ� �ߵŰ�����?" });
	SMS_vector.push_back({ "010-1234-5679", "010-1234-5678", "�� 5������� �������׿�." });
	SMS_vector.push_back({ "010-1234-5676", "010-1234-5678", "���ͺ��� �ð��� �ɸ��׿�." });

	for (auto& e : SMS_vector) e.Print();
}