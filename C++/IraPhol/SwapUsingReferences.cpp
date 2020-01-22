#include <iostream>
using namespace std;

void swap(int&, int&);
int main() 
{
	int a = 10;
	int b = 20;

	cout << "a = " << a << "  b = " << b << "\n";
	swap(a, b);
	cout << "a = " << a << "  b = " << b << "\n";
	return 0;
}

void swap(int& a, int& b)
{
	int t = 0;
	t = b;
	b  = a;
	a = t;
}
