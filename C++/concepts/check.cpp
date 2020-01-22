#include <iostream>
using namespace std;

class demo {
	public:
		int a, b;
		demo()
		{
			a = b= 0;
		}
		demo (int a, int b) {
			this->a = a;
			this->b = b;
		}

		friend demo operator+ (demo&, demo &);
};


demo operator+(demo& d1, demo &d2) {
	demo d3;
	d3.a = d1.a + d2.a;
	d3.b = d1.b + d2.b;

	return d3;
}

int main() {
	demo d1 (10, 20);
	demo d2 (30 , 40);

	demo d4;
	d4 = d1  + d2;

	cout << d4.a << d4.b << endl;
	return 0;
}
