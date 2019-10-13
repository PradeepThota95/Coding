#include <iostream>

using namespace std;

int GCD(int m, int n)
{
	int r;

	while(n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}

	return m;
}
int main()
{
	int m, n;
	cout << "Enter two integers :  ";
	cin >> m >> n;
	cout  << "GCD of " << m << "and " << n << "is : " << GCD(m,n);
	return 0;
}
