#include <iostream>
using namespace std;

class point {
	int x, y; // By default these variables are private; can't access outside the class

	public:
	void print() const {
		cout << "x: " << x << " y: " << y << "\n";
	}

	void print (const string& name) const;

	void set (int u, int v) {
		x = u; 
		y = v;
	}

	void plus (point c);
};

int main() {
	point p;
	p.set(10, 20);
	cout << p.x << p.y;
}
