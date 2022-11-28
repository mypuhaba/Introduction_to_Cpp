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
		cout << "���ڸ޽��� #" << num_ << endl;
		cout << "�߽���: " << sender_ << " ������: " << receiver_
			<< " ����: " << text_ << endl;
	}

private:
	string sender_, receiver_, text_;
	int num_;
};

int main()
{
	SMS m1{ "010-1234-5678", "010-1234-5679", "C++ ���δ� �� �Ű�����?", 1 };
	SMS m2{ "010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�.", 2 };

	m1.Print();
	m2.Print();
}