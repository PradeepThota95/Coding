#include <iostream>
using namespace std;


int lookup[1000];

int fib(int n) {
	if (n <= 1)
		return n;

	return fib(n-1) + fib(n-2);
}


int memoization(int n) {

	if (lookup[n] == -1) {

		if(n <= -1)
			lookup[n] = n;
		else
			lookup[n] = fib(n-1) + fib (n-2);
	}

	return lookup[n];
}


int tabulation (int n) {
	int f[n];

	f[0] = 1;
	f[1] = 1;

	for(int i = 2; i < n; ++ i)
		f[i] = f[i-1] + f [i-2];

	return f[n-1];
}


// Initialize the array to -1
void initialize (int *a) {
	for(int i = 0;  i < 1000; ++ i)
		a[i] = -1;
}

int main(void) {

	cout << fib(40) << endl;
	initialize (lookup);
	cout << "Memoizatiton : " << memoization(50) << endl;
	cout << "Tabulation : " << tabulation(50) << endl;
	return 0;
}

