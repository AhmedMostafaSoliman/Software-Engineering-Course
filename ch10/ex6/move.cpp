#include <iostream>
#include "move.h"

using namespace std;

Move::Move(double a, double b) {
	x = a;
	y = b;
}

void Move::showmove() const {
	cout << "x coordinate: " << x << endl << "y coordinate: " << y << endl;
}

Move Move::add(const Move & m) const {
	
	Move new_move = Move(this->x + m.x, this->y + m.y);
	return new_move;
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}