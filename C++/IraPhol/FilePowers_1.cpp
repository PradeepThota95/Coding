#include <iostream>
#include <assert.h>

using namespace std;

int sqr_or_power(int k = 2, int n)
{
	assert(k > 1);
	// if false program aborts
	 if (k == 2)
		 return (n * n);
	 else
		 return (sqr_or_power(k-1,n ) * n);
}
int main()
{
	cout << sqr_or_power(3,5) << endl;
	return 0;
}
