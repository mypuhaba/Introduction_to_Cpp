#include <iostream>
using namespace std;

class Complex
{
public:
	Complex() {}
	Complex(const double& r, const double& i) : real_(r), imag_(i) {}
	~Complex() {}

	double get_real() { return real_; }
	double get_imag() { return imag_; }

	void set_real(const double& r) { real_ = r; }
	void set_imag(const double& i) { imag_ = i; }

	void Print();

private:
	double real_;
	double imag_;

};

void Complex::Print()
{
	if (imag_ < 0)
		cout << '(' << real_ << imag_ << 'i' << ')';
	else if (imag_ == 0)
		cout << '(' << real_ << ')';
	else
		cout << '(' << real_ << '+' << imag_ << 'i' << ')';
}

Complex Add(Complex a, Complex b)
{ 
	Complex sum;
	sum.set_real(a.get_real() + b.get_real());
	sum.set_imag(a.get_imag() + b.get_imag());
	return sum;
}

int main()
{
	Complex a{ 5,3 }, b{ 3,-4 }, c{ 8,-1 };
	a.Print(); cout << '+';
	b.Print(); cout << '=';
	Add(a, b).Print();
}