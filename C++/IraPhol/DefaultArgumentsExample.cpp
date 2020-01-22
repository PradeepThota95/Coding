#include <iostream>
using namespace std;

void FunDefArgs(int a, int b, int c  = 400, int d = 500) {
	cout << a << " " << b << " " << c << " " << d << "\n";
}

int main () {
	int a, b, c, d;
	a = 10;
	b = 20;
	FunDefArgs(a, b); // Default value of C, D is printed in this case
	c = 30;
	FunDefArgs(a, b, c); // Default value of D is printed in this case
	d = 40;
	FunDefArgs(a, b, c, d);

	return 0;
}

