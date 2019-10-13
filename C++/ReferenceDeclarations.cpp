#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int *p = &a;
	int& copy = a; // alias for variable a

	cout <<a << " " << copy << endl;

	(*p)++;

	cout <<a << " " << copy << endl;
	return 0;
}

