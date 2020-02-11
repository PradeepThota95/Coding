#include <stdio.h>

#define PRINT(X) #X

int main()
{
	printf("%s\n", PRINT(12235555));
	return 0;
}
