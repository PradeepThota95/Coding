#include <iostream>
using namespace std;

// Place public Member functions first followed by declaring private variables.

class point {
	public:
	void show () {
		cout << "x = " << x << "\ty = " << y << "\n";
	}
	void set(int u, int v) {
		x = u;
		y = v;
	}
	void show (const string& name) const {
		cout << "The name of the string is : " << name << "\n";
	}
	void plus (point p); // Prototype declaration
	private:
	double x, y; 
};

void point::plus (point p) {
	x += p.x;
	y += p.y;
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
