#include <stdio.h>
#include <math.h>

void ProductArray(int array[], int n)
{
	int i = 0, j = 0;
	int left[n], right[n], product[n];

	left[0] = 1;
	right[n-1] = 1;
	
	for(i = 1; i < n; ++ i)
		left[i] = array[i-1] * left[i-1];

	for(j = n-2; j >= 0; j --)
		right[j] = array[j+1] * right[j+1];

	for(i = 0; i < n; ++ i)
		product[i] = left[i] * right[i];

	for(i = 0; i < n; ++ i)
		printf("%d ", product[i]);
	printf("\n");
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
