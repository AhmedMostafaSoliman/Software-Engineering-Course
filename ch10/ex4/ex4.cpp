#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

int main() {
	double a[4] = { 425.65,4232.3,432412.3,432.0 };
	Sales s1(a, 4);
	s1.show();
	s1.setSales();
	s1.show();
	return 0;
}