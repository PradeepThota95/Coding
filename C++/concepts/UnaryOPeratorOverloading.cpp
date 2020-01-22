#include <iostream>
using namespace std;

class demo { 
	public:
	int a, b;
	void operator -();
};

void demo::operator -() {
	a = -a;
	b = -b;
	cout << a << b << endl;
}
int main()
{
	demo d;
	d.a= 10;
	d.b = 20;
	-d;
	return 0;
}
