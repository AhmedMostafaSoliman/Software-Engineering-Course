#include <iostream>
#include "move.h"

using namespace std;

int main() {
	Move m1,m2(3,4),m3;
	m1.showmove();	
	m1.reset(1, 2);
	m1.showmove();
	m3 = m1.add(m2);
	m3.showmove();
	return 0;
}