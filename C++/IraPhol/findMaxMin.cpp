/* Write a program that finds the maximum and minimum integer value of a sequence of inputted integers. 
 * The program should first prompt the user for how many values will be entered. The program should print
 * this value out and ask the user to confirm this value. If the user fails to confirm the value, she must enter a new value.
*/

#include <iostream>
using namespace std;

void FindMaxMin(int arr[], int n, int *max, int *min)
{
	if(n == 1)
	{
		*max = *min = arr[n];
		return;
	}

	*max = *min = arr[0];
	for(int i = 1; i < n; ++ i)
	{
		if(arr[i] > *max)
			*max = arr[i];
		else if(arr[i] < *min)
			*min = arr[i];
	}
}

int main()
{
	int arr_size = 0, 
	    max_val = -1,
	    min_val = -1;

	cout << "Enter the size of the array : ";
	cin >> arr_size;

	if(arr_size <= 0)
		return 0;

	int arr[arr_size];
	cout << "Enter array of values : ";
	for(int i = 0; i < arr_size; ++ i)
		cin >> arr[i];

	FindMaxMin(arr, arr_size, &max_val, &min_val);

	cout << " Max = " << max_val << endl;
	cout << " Min = " << min_val << endl;

	return 0;
}
