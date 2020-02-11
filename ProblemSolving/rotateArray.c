#include<stdio.h>

void reversearray(int *a, int n)
{
	for(int i=0,j=n-1; i<j; i++,j--)
		a[i]^=a[j]^=a[i]^=a[j]; // Swapping using XOR operator 


	for(int i=0; i<5; i++)
		printf("%d ",a[i]);
	printf ("\n");


}

void rotateArray(int a[], int n, int k)
{
	reversearray(a, k); // First swap K elements 
	reversearray(&a[k], n-k); // Swap n-k elements 
	reversearray(a, n); // Swap all 
}


int main()
{
	int a[]={1,2,3,4,5};
	rotateArray(a,5,3);
	for(int i=0; i<5; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}

