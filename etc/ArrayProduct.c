/*
 * Probelm: Find the product of 
 */

#include <stdio.h>

void ProductArray (int a[], int n)
{
	int b[n]; // Local temp array 
	for(int i = 0; i < n ; ++ i)
	{
		int product = 1;
		for(int j = 0; j < n; ++ j)
		{
			if(i == j)
				continue;
			product *= a[j];
		}
		b[i] = product;
	}

	// copy local array to array given
	for (int i = 0; i < n; ++ i)
		a[i] = b[i];
}

int main()
{
	int  size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int array[size];
	printf("Enter the elements of the array : ");
	for (int i = 0; i < size; ++ i)
		scanf("%d", &array[i]);

	ProductArray(array, size);
	  
	for (int i = 0; i < size; ++ i)
		printf("%d ", array[i]);
	printf("\n");
}
