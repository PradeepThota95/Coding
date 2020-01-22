#include <iostream>
using namespace std;

struct point {
	int x, y;

	void show() {
		cout << "The values of coordinates = " << x  << "\t" << y << "\n";
	}

	void set(int p, int q) {
		x = p;
		y = q;
	}
};

int main() {
	point w1, w2;

	w1.set(1, 2);
	w2.set(10, 20);
	w1.show();
	w2.show();

	return 0;
}
