#include <iostream>
using namespace std;

class BankAccount
{
	string number;
	int balance;
public:
	void init(string number, int balance);
	void deposit(int amount);
	void withdraw(int amount);
};
