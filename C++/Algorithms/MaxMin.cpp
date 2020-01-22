#include <iostream>
#include <cmath>
using namespace std;


void StraightMaxMin(int a[], int sz)
{
	int max =a[0], min = a[0];
	for(int i = 1; i < sz; ++ i)
	{
		if(a[i] > max)
			max  = a[i];
		if(a[i] < min)
			min = a[i];
	}	
	cout << "max = " << max << " min = " << min << endl;
}

/*
void DandCMaxMinIterative(int a[], int n)
{
	int low = 0, high = n-1;
	while (low <= high)
	{
		if(low == high)
			min = max = a[low];
		else if (low+1 == high)
		{
			if(a[low] < a[high])
			{
				max = a[high];
				min = a[low];
			}
			else
			{
				min = a[high];
				max = a[low];
			}
		}
		else
		{
			mid = floor( (low + high) / 2);
			

	}
}*/



void DandCMaxMin(int a[], int low, int high, int &max, int &min)
{
	// If array contains only one element; Then max = min = a[low];
	if (low == high)
		min = max = a[low];
	/*else if (low   ==  high -1) // This is for checking the side by side values; Alternatively we can use (low -1) == (high)
	{
		if(a[low] < a[high])
		{
			max = a[high];
			min = a[low];
		}
		else
		{
			max = a[low];
			min = a[high];
		}
	}*/
	else
	{
		int mid = floor ((low + high) / 2);
		int max1 = 0 , min1 = 0;
		cout << "*********************************" << endl;
		cout << max << min << endl;
		cout << "*********************************" << endl;
		DandCMaxMin(a, low, mid, max, min);
		DandCMaxMin(a, mid+1, high, max1, min1);

		if(max1 > max)
			max = max1;
		if(min1 < min)
			min = min1; 
	}
}

int main()
{
	int arr_sz = 0;

	cout << "Enter the size of array : ";
	cin >> arr_sz;

	int arr[arr_sz];
	cout << "Enter Elements of array : ";
	for(register int i = 0; i < arr_sz; ++ i)
		cin >> arr[i];

	StraightMaxMin(arr, arr_sz);
	int max , min;
	DandCMaxMin (arr, 0, arr_sz-1, max, min);
	cout << max << " " << min << endl;
	return 0;
}
