#include <stdio.h>

void fun(int a)
{
	++a;
	printf("%d ", a);
}
int main() {

	int a = 10;
	fun(++a);
	fun(a++);
	printf(" %d", a);
	return 0;
}
