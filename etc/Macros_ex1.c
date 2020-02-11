#include <stdio.h>

#define NUMBERS 1,\
	2, \
	3

int main(void) {
	int x[] = { NUMBERS };

	printf ("%d %d %d \n", x[0], x[1], x[2] );
	return 0;
}
