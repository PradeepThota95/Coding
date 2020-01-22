#include "pgm.h"

void fun1(int n) 
{

	int i;

	cout << "Hello from function1() " << endl;

	for(int i = 0; i < n; ++ i)
		fun2();
}


void fun2()
{
	cout << "Hello from function2() " << endl;
}
