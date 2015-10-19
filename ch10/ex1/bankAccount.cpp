#include <iostream>
#include <string>
#include "bankAccount.h"

using namespace std;


BankAccount::BankAccount() {
	m_name = "";
	m_acc_number = "";
	m_balance = 0;
}


BankAccount :: BankAccount(string name, string acc_number, double balance)
{
	m_name = name;
	m_acc_number = acc_number;
	m_balance = balance;
}


void BankAccount::display_info()
{
	cout << "Depositor's name is " << m_name << endl << "Account number is " << m_acc_number << endl << "Balance value is " << m_balance << endl;
}


void BankAccount::deposite(double val) {
	m_balance += val;
}

void BankAccount::withdraw(double val) {
	if (val > m_balance) cout << "Sorry you dont have enough money" << endl;
	else m_balance -= val;
}