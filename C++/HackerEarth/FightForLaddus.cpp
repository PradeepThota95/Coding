#include <string.h>
#include <iostream>
using namespace std;


#define MAX 10000

void fightForLaddus(int a[], int n)
{
	int hash[MAX];
	int b[n];

	// Set the hash value of each array element 
	for(register int i = 0; i <  n; ++ i)
		++ hash[a[i]];

	for(int i = 0; i < n; ++ i)
	{
		char flag = 0;
		int j = i+1;
		for(; j  < n;  ++ j) {
			if (hash[a[i]]  < hash [a[j]]) {
				flag = 1;
				break;
			}
		}

	       if(flag == 1)
		       cout << a[j];
	       else
		       cout << -1;
	       cout << " ";
	}
	cout << "\n";


//	for(register int i = 0; i  < n; ++ i)
//		b[i] = hash[a[i]];

	/*
	for(register int i = 0; i < n; ++ i)
	{
	       char flag = 0;
	       int count = b[i];
	       int j = i+1;
	       for(; j <= n; ++ j)
	       {
		       if(b[j] > count)
		       {
			       flag = 1;
			       break;
		       }
	       }
	       if(flag == 1)
		       cout << a[j];
	       else
		       cout << -1;
	       cout << " ";

	}*/
	cout << "\n";

}

int main() {
	int a[] = {1, 3, 7, 2, 5, 1, 4, 2, 1, 5};
	fightForLaddus(a, 10);
	return 0;
}
