#include <iostream>
using namespace std;

void findMinimum(int a[], int n)
{
	int min_dist = -1;
	for(int i = 0; i < n; ++ i) {
		int pair_distance = -1;
		for (int j = n-1; j > i; -- j) {
			if(a[i] == a[j])
				pair_distance = j - i;
		}

		if(min_dist > pair_distance)
			min_dist = pair_distance;
	}

	cout << "The Minimum Distaance : " << min_dist << endl; 
}

int main()
{
	int size = 0;
	cin >> size;
	int arr[size];
	for(int i = 0; i < size; ++ i)
		cin >> arr[i];
	findMinimum(arr, size);
	return 0;
}
