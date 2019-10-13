#include <iostream>
#include <assert.h>

using namespace std;

int sqr_or_power(int n, int k = 2)
{
	assert(k > 1);
	// if false program aborts
	 if (k == 2)
		 return (n * n);
	 else
		 return (sqr_or_power(n, k - 1) * n);
}
int main()
{
	cout << sqr_or_power(5,3) << endl;
	return 0;
}
