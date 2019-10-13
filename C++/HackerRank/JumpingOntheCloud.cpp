/* This program is used to find minimum number of steps to reach N.
 * Problem from hackerrank:https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

 */

#include <iostream>
using namespace std;

int JumpingOnClouds(int a[], int n)
{
	int steps = 0;

	for(int i = 0; i < n;)
	{
		if( (a[i+1] != 0) && (a[i+2] != 0))
			break;
		else if(a[i+2] != 1) {
			++ steps;
			i += 2;
		}

		else if(a[i+ 1] != 1) {
			++ steps;
			i += 1;
		}

	}
	return steps;
}
int main()
{
	int n;

	cout << "Enter N : ";
	cin >> n;


	int ar[n];
	cout << "Enter Values of Array :  ";
	for(int i = 0; i < n; ++ i)
		cin >> ar[i];

	cout << "The Minimum number of steps required is :   " << JumpingOnClouds(ar, n) << endl;
	return 0;
}
