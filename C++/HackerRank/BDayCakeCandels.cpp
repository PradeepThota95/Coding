#include <iostream>

using namespace std;

int MaxElementCount(int a[], int n)
{
	int count = 0;
	int prev_max = 0,
	    max = 0;

	for(register int i = 0; i < n; ++ i)
	{
		if(a[i] >= max)
		{
			max = a[i];
			if(prev_max != max)
			{
				count = 0;
				prev_max = max;
			}
			count ++;
		}
	}
	return count;
}
int main()
{
	int arr_sz;
	cout << "Enter the size of array : ";
	cin >> arr_sz;

	cout << "Enter the values of array : ";
	int arr[arr_sz];
	for(register int i = 0; i < arr_sz; ++ i)
		cin >> arr[i];

	cout << "Max Element Count  : " << MaxElementCount(arr, arr_sz) << endl;
	return 0;
}
