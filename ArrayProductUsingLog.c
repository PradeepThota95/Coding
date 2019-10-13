#include <stdio.h>
#include <math.h>

#define EPS 1e-9

long int ArrayProduct(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; ++ i)
	{
		sum = sum + log10(a[i]);
		printf("sum = %d, array[%d] = %d \n", sum, i, a[i]);
	}

	return sum;
}
int main()
{
	int size;

	printf("Enter the size of the array : ");
	scanf("%d", &size);

	int array[size];

	for(int i = 0; i < size; ++ i)
		scanf("%d", &array[i]);

	long int Product = ArrayProduct(array, size);

	printf("Product of the array is: %ld", Product);
	
	return 0;
}
