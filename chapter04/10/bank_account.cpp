#include "bank_account.h"

void BankAccount::init(string number, int balance)
{
	this->number = number; this->balance = balance;
	cout << "���� �ܾ�: " << balance << endl;
}

void BankAccount::deposit(int amount) { 
	balance += amount;
	cout << "after deposit" << '(' << balance << ')'
		<< " ���� �ܾ�: " << balance << endl;
}

void BankAccount::withdraw(int amount) {
	balance -= amount;
	cout << "after withdraw" << '(' << balance << ')'
		<< " ���� �ܾ�: " << balance << endl;
}