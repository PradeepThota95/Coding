#include <stdio.h>

void printArray(int* arr[], int m, int n)
{
	for(int i = 0; i < m; ++ i)
		for(int j = 0; j < n; ++ j)
			printf("%d ", *(arr + i * n + j));
}
int main() {
	int a[4][2];
	int count = 0;
	for(int i = 0; i < 4; ++ i)
		for(int j = 0; j < 2; ++ j)
			a[i][j] = count ++;

	printArray((int **)a, 4, 2);
	return 0;
}
