#include <stdio.h>

int main()
{
	int a, b;
	int c = 0;
	c = scanf("%d%d", &a, &b);
	printf("%d\n", c);
	
	c = scanf("%d", &a);
	printf("%d\n", c);

	return 0;
}
