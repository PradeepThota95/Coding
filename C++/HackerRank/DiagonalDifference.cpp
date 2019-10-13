#include <iostream>
#include <vector>

using namespace std;

int DiagonalDiff(int arr[][100])
{
	int d1_sum = 0, 
	    d2_sum = 0;

	for(int i = 0; i < arr.size(); ++ i)
		d1_sum += arr[i][i];
	return d1_sum;
}

int main()
{
	int n;
	cout << "Enter array size : " ;
	cin >> n;

	int a[n][n];

	cout << "Enter the values of array :";
	for(int i = 0; i < n; ++ i)
		for (int j = 0; i < n; ++ j) {
			cin >> a[i][j];
		}

	cout << "Result : " << DiagonalDiff(a) << endl; 
}
