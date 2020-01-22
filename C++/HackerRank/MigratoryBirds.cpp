#include <iostream>
using namespace std;
#define MAX 100000
int Birds(int a[], int n) {
	int hash[MAX];
	int i = 0;
	for(; i < MAX; ++ i)
		hash[i] = 0;
	i = 0;
	for(; i < n; ++ i)
		hash[a[i]] ++;
	i = 0;
	int count = 0;
	int val = -1;
	for(; i < n; ++ i) {
		if(hash[i] > count) {
			count = hash[i];
			val = i;
		}
	}

	return val;

}

int main()
{
	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; ++ i)
		cin >> a[i];

	cout << Birds(a, n) << endl;
	return 0;
}
