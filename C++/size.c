#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10];
	int *p = a;

	printf("%ld %ld",sizeof(a), sizeof(p));
	return 0;
}
