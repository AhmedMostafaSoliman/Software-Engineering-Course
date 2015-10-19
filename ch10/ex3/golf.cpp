#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

Golf::Golf(const char *fn, const int h) {
	strcpy(fullname, fn);
	handicap = h;
};

void Golf::setgolf(){
	int h;	cin >> h;
	char fn[Len];
	cout << "Enter your name " << endl;		
	scanf("%s", fn);
	cout << "Enter handicap: " << endl;
	Golf temp(fn, h);
	*this = temp;
};

void Golf::show() {
	cout << fullname << endl;
	cout << handicap << endl;
}