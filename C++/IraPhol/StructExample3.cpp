/* This program gives idea how the functions defined outside the struct */

#include <iostream>
using namespace std;

struct point {
	int x, y;

	void show() {
		cout << "x  = " << x << "\ty = " << y << "\n";
	}

	void set(int u, int v){
		x = u;
		y = v;
	}

	void plus(point c); // Declaration of function 
};

void point::plus (point c) // Definition outside struct 
{
	x += c.x;
	y += c.y;
}

int main() {
	point p1;
	point p2;

	p1.set(10, 20);
	p1.show();

	p2.set(30, 40);
	p2.show();

	p2.plus(p1);
	p2.show();

	return 0;
}
