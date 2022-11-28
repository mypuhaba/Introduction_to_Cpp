#include "bank_account.h"

int main()
{
	BankAccount a;
	a.init("1111-22-3333-44", 1000000);
	a.deposit(1000000);
	a.withdraw(1000000);
}