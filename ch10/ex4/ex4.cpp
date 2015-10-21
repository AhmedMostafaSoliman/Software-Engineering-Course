#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

int main() {
	double a[4] = { 400.8, 400.432, 500.34, 423.234 };
	Sales s1(a, 4);
	s1.show();
	s1.setSales(3);
	s1.show();
	return 0;
}
