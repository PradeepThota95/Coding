#include <iostream>
using namespace std;

void PrintArray(int a[], int N)
{
	for(int i = 0; i < N; ++ i)
		cout << a[i] << " " ;
	cout << "\n";
}

void RotateArray(int a[], int N, int d)
{
	int temp = 0;

	for(int k = 0; k < d; ++ k)
	{
		temp = a[0];
		cout << temp << endl;
		for(int i = 0; i < N; ++ i) 
			a[i] = a[i+1];
		a[N-1] = temp;
	}
}

int main() 
{
       int no_tst_cas = 0;
       
       cout << "Enter Number of Testcases : ";
       cin >> no_tst_cas;

	while(no_tst_cas --)
	{
		int ar_sz = 0;

		cout << "Enter the size of the array : ";
		cin >> ar_sz;
		
		cout << "Enter the elements of Array : ";
		int  ar[ar_sz];
		for(register int i = 0; i < ar_sz; ++ i)
			cin >> ar[i];
		
		cout << "Enter No Of Rotations : ";
		int d = 0;
		cin >> d;
		
		PrintArray(ar, ar_sz);
		RotateArray(ar, ar_sz, d);
		PrintArray(ar, ar_sz);
	}
	return 0;
}
