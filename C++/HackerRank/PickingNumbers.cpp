#include <iostream>
#include <cstring> // For Memset
using namespace std;


int pickingNumbers(int a[], int n) {
    int max_dist = -1;
    int res[128];
    memset (res, 0, 128);
    for(int i = 0; i < n; ++ i)
        ++ res[a[i]];

    for(int i = 1; i < 128; ++ i)
    {
        int dist =  res[i-1] + res[i];
        if (dist > max_dist)
            max_dist = dist;
    }
    return max_dist;
}


/*int MinimumDistance (int a[], int n)
{
	int max_dist = -1;
	memset (res, 0, MAX);
	for(int i = 0; i < n; ++ i)
		++ res[a[i]];

	for(int i = 1; i < 120; ++ i)
	{
		int dist =  res[i -1] + res[i];
		if (dist > max_dist)
			max_dist = dist;
	}
	return max_dist;
}
*/
int main()
{
	int sz;
	cin >> sz;

	int a[sz];
	for(register int i = 0; i < sz; ++ i)
		cin >> a[i];

	//cout << MinimumDistance(a, sz) << endl;
	cout << pickingNumbers(a, sz) << endl;
	return 0;
}
