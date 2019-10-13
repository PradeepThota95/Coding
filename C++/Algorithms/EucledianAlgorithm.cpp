/* 
 * This the program for finding the Greatest Common Devisor of given two numbers.
 * Algorithm  : "Euclidean Algorithm"
 * Complexity : " " 
 */

#include <iostream>
using namespace std;

int FindGCD(int a, int b)
{
	if(b == 0)
		return a;
	return FindGCD(b, a%b);
}


void swap(int *p, int*q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int FindGCD1(int a, int b)
{
	while(b)
	{
		a %= b;
		swap(&a,&b);
	}
	return a;
}

int main()
{
	int m,n;

	cout << "Enter Two Integers : ";
	cin >> m >> n;

	cout << "GCD of Given numbers is : " << FindGCD1(m,n) << endl;
	return 0;
}
