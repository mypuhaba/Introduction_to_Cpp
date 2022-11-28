#include <iostream>
using namespace std;

class SMS
{
public:
	SMS() {}

	SMS(const string& s, const string& r, const string& t, const int& n) :
		sender_(s), receiver_(r), text_(t), num_(n) {}

	~SMS() {}

	const string& get_sender_() { return sender_; }
	const string& get_receiver_() { return receiver_; }
	const string& get_text_() { return text_; }

	void set_sender_(const string& s) { sender_ = s; }
	void set_receiver_(const string& r) { receiver_ = r; }
	void set_text_(const string& t) { text_ = t; }

	void Print() const
	{
		cout << "문자메시지 #" << num_ << endl;
		cout << "발신자: " << sender_ << " 수신자: " << receiver_
			<< " 내용: " << text_ << endl;
	}

private:
	string sender_, receiver_, text_;
	int num_;
};

int main()
{
	SMS m1{ "010-1234-5678", "010-1234-5679", "C++ 공부는 잘 돼가나요?", 1 };
	SMS m2{ "010-1234-5679", "010-1234-5678", "네 5장까지는 문제 없네요.", 2 };

	m1.Print();
	m2.Print();
}