#include <iostream>
using namespace std;




void secondLargest(int a[], int n) {
	int max = -1;
	int sec_max = -1;

	for(int i = 0 ; i < n; ++ i)
	{
		if(a[i] > max)
		{
			sec_max = max;
			max = a[i];
		}
		else if(a[i] < max && a[i] > sec_max)
		    sec_max = a[i];
	}
	if(max == sec_max)
	  cout << -1 << endl;
	else
	cout << sec_max << endl;
}


/*

void secondLargest(int a[], int n) {
	int max = a[0];
	int sec_max = a[0];

	for(int i = 1 ; i < n; ++ i)
	{
		if(a[i] > max)
		{
			sec_max = max;
			max = a[i];
		}
		if(a[i] < max && a[i] > sec_max)
			sec_max =  a[i];
	}
	cout << "Second Max =  " << sec_max << endl;
}
*/
int main()
{
	int tc = 0;
	cin >> tc;

	while(tc --) {
		int sz = 0;
		cin >> sz;
		int a[sz];

		for(int i = 0; i < sz; ++ i)
			cin >> a[i];

		secondLargest(a, sz);
	}
	return 0;
}
