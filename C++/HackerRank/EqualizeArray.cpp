#include <iostream>
#include <cstring>

using namespace std;
#define MAX 128
int res[MAX];

int EqualizeArray(int a[], int n) {
	int min = 999999;

	for(int i = 0; i < n; ++ i) {
		++ res[a[i]];
	}

	for(int i = 0; i < MAX; ++ i)
	{
		if(n - res[i] < min)
			min = n - res[i];
	}

	return min;
}

int main()
{
	int n;
	cin >> n;

	int a[n];
	memset(res, 0, 128);
	for(int i = 0; i < n; ++ i)
		cin >> a[i];

	cout << EqualizeArray(a, n) << endl;
	return 0;
}
