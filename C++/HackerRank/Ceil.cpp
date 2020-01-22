#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a = 2 , b = 2;
	double h = ceil (2*a/b);
	cout << h << endl;
	a = 1000000;
	b = 1;
       	h = ceil(2.0*a/b);
	cout << h << endl;
	return 0;
}
