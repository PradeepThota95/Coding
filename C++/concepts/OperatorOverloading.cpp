#include <iostream>
using namespace std;

class demo {
	int x, y, z;

	public:
	void getdata(int a, int b, int c) {
		x= a;
		y= b;
		z= c;
	}
	void display();
	void operator -();
};

void demo:: display() {
	cout << x << "\t" << y << "\t" << z << "\n";
}

void demo:: operator-() {
	x = -x;
	y = -y;
	z= -z;
}


int main()
{
	demo d;
	d.getdata(10,20,30);
	d.display();
	-d;
	d.display();

	return 0;
}
