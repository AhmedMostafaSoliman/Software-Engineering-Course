#include <iostream>
#include "bankAccount.h"
using namespace std;

int main() {

	BankAccount b("Ahmed Mpstafa", "222", 9999.9999);
	b.display_info();
	b.deposite(100);
	b.withdraw(50);
	b.display_info();

	return 0;
}

