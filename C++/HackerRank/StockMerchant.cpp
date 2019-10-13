/*
 * 
 *Airtel Customer Care Number: 1800 103 0121 */
#include <iostream>
#include <string.h>
using namespace std;

int CountOfElements[101];
int stockMerchant(int a[], int n)
{
	int pairs = 0;

	/* Find the count of individual elements  in an array */
	for(int i = 0; i < n; ++ i)
		++ CountOfElements[a[i]];

	/* Find the pairs by dividing the individual count with '2' */
	for(int i = 0; i < 101; ++ i)
	{
		if(CountOfElements[i])
			pairs += CountOfElements[i]/2;
	}

  return pairs;
}
int main()
{
	memset(CountOfElements, 0, 101);
	int arr_size;
	cout << "Enter the size of the array : ";
	cin >> arr_size;

	int arr[arr_size];
	memset(arr, 0, arr_size);
	cout << "Enter the elements of the array: ";
	for(int i = 0; i < arr_size; ++ i)
		cin >> arr[i];

	cout << "Number of pairs in the given sequence is : " << stockMerchant(arr, arr_size) << endl;
	return 0;
}

