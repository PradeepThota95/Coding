#include <iostream>
using namespace std;


void test (int a) {
	cout << "This is the function of int catching " << a << endl;
}

void test (float a) {
	cout << "This is the function of float catching " << a << endl;
}

void test (int a, float b) {
	cout << "This is the function of int and float  catching " << a <<  " \t"  << b <<  endl;
}

int main() {
	int a = 10;
	float b = 10.5;

	test(a);
	test(b); 
	test(a, b);
	return 0; 
}
