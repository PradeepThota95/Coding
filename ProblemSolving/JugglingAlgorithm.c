#include <stdio.h>

void rotateArray (int a, int n , int k) {
	for(int i = 0; i < k; ++ i)
	{
		int temp = a[k];
		a[i] 
int main() {
	int a[] = {1, 2, 3, 4, 5};

	rotateArray(a,5,3);
	for(int i=0; i<5; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
