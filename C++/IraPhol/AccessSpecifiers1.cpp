#include <iostream>
using namespace std;

struct point {

	void show () const {
		cout << "x : " << x << "\ty : " << y << "\n";
	}

	void show (const string& name) const {
		cout << "name of string : " << name << "\n"; 
	}
	void set (int u, int v) {
		x = u;
		y = v;
	}

	void plus (point c);
	private:
		int x, y;

};

void point::plus (point c) // Definition outside struct 
{
	x += c.x;
	y += c.y;
}

void foo (point p)
{
	cout << p.x << " " << p.y << "\n";
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

	foo(p2);

	return 0;
}
