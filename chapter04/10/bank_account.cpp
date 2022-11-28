#include "bank_account.h"

void BankAccount::init(string number, int balance)
{
	this->number = number; this->balance = balance;
	cout << "ÇöÀç ÀÜ¾×: " << balance << endl;
}

void BankAccount::deposit(int amount) { 
	balance += amount;
	cout << "after deposit" << '(' << balance << ')'
		<< " ÇöÀç ÀÜ¾×: " << balance << endl;
}

void BankAccount::withdraw(int amount) {
	balance -= amount;
	cout << "after withdraw" << '(' << balance << ')'
		<< " ÇöÀç ÀÜ¾×: " << balance << endl;
}