#include"Position.h"
#include <iostream>
using namespace std;

int main() {

	bool same_row;

	Position p1 = Position(3, 'F');
	Position p2(-1, 'X');
	Position* p = new Position(4, 'H');

	//p1.print();
	//p2.print();
	//p->print();

	p1.move(RIGHT);
	p1.move(RIGHT);
	p1.move(UP);
	p1.move(UP);

	p1.print();
	p->print();

	cout << p1.same_Column(p);


	delete p;

	return 0;
}