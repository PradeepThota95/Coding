#include <iostream>
using namespace std;


struct point {
	public:	
		void print() const {
			cout << "x : " << x << " y : " << y << endl;
		}
		void print (const string& name) {
			cout << "The name of string is : " << name << endl;
		}
		void set (int u, int v) {
			x = u;
			y = v;
		}

	public:
		int x, y;
};

void foo(point w)
{
	cout << w.x << w.y << endl;
}

int main() {
	point p;
	p.set(10, 20);
	foo(p);

	return 0;
}
