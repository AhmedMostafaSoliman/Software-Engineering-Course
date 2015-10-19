
#include <string>
using namespace std;
class Stock
{
private:
	string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock(); // default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock(); // do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	int get_shares() { return this->shares; };
	string get_companyname(){ return this->company; };
	double get_share_val(){ return this->share_val; };
	double get_total_val(){ return this->total_val; };



	
	const Stock & topval(const Stock & s) const;
};
