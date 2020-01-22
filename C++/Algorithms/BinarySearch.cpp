/* 
 * Author : Pradeep Thota
 * This is the sample program for searching  an element in a sorted array 
 * Binary search takes "O(log N)" time to search an element in a sorted array 
 */

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int x)
{
	while(high > low)
	{
		//int mid = (low + high)/2; // This May go Out Of Range if low and  high are maximum values

		int mid = high + (high-low) / 2;
		if(arr[mid] == x)
			return mid;
		else if (x < arr[mid])
			return BinarySearch(arr, low, mid - 1, x);
		else
			return BinarySearch(arr, mid+1, high, x);
	}
	return -1; // If search fails 
}


int main()
{
	int arr_size = 0, elmnt2beserched = -1;
	cout << "Enter the size of Array : ";
	cin >> arr_size;

	int arr[arr_size];
	for(int i = 0; i< arr_size; ++ i)
		cin >> arr[i];
	cout << "\n";

	cout << "Enter Element to be searched :  ";
	cin >> elmnt2beserched;

	int ret_val = BinarySearch(arr, 0, arr_size, elmnt2beserched);

	if(ret_val < 0)
		cout << "Element can't be searched" << endl;
	else
		cout << "Element found at index : " << ret_val + 1 << endl;

	return 0;
}
