#include <string>
using namespace std;

class BankAccount{

private:
	string m_name;
	string m_acc_number;
	double m_balance;

public:
	BankAccount();
	BankAccount(string name,string acc_number,double balance);
	void display_info();
	void deposite(double val);
	void withdraw(double val);
};