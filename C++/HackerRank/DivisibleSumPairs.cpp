#include <iostream>
using namespace std;

int DivisiblePairs(int a[], int k, int n)
{
	int count = 0;
	for(int i = 0; i < n; ++ i) {
		for (int j = n-1; j > i; -- j) {
		       if ( ((a[i] + a[j]) % k) == 0){	
			       cout << a[i] << " " << a[j] << endl;
			       count ++ ;
		       }
		}
	}
	return count;
}

int main() {
	int sz, k;
	cin >> sz >> k;
	int a[sz];

	for(int i = 0; i < sz;  ++ i)
		cin >> a[i]; 

	cout << DivisiblePairs(a, k, sz) << endl;
	return 0;
}
