#include <stdio.h>
#define MAX 20

int main() {
	printf("%d\n", MAX);
#undef MAX
	int MAX = 111111;
	printf ("%d", MAX);
	return 0;
}

