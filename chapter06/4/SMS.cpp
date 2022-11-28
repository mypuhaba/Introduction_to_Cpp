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
		cout << "발신자: " << sender_ << " 수신자: " << receiver_
			<< " 내용: " << text_ << endl;
	}
};

int main()
{
	cout << "[ 전통적인 객체 배열 방법 ]\n";
	SMS SMS_array[3]{ 
		SMS{"010-1234-5678", "010-1234-5679", "C++ 공부는 잘돼가나요?"},
		SMS{"010-1234-5679", "010-1234-5678", "네 5장까지는 문제없네요."},
		SMS{"010-1234-5676", "010-1234-5678", "벡터부터 시간이 걸리네요."}
	};

	for (auto& e : SMS_array) e.Print();
	cout << endl;

	cout << "[ 동적 객체 생성 ]\n";
	vector<SMS> SMS_vector;
	SMS_vector.push_back({ "010-1234-5678", "010-1234-5679", "C++ 공부는 잘돼가나요?" });
	SMS_vector.push_back({ "010-1234-5679", "010-1234-5678", "네 5장까지는 문제없네요." });
	SMS_vector.push_back({ "010-1234-5676", "010-1234-5678", "벡터부터 시간이 걸리네요." });

	for (auto& e : SMS_vector) e.Print();
}