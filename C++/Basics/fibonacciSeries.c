#include <stdio.h>


int res[1000];

void initialize(int res[]) {
	for(int i = 0; i < 1000; ++ i)
		res[i] = -1;
}

int fib (int n)
{
	if(res[n] == -1)
	{
		if (n <= 1 )
			res[n] = n;
		else
			res[n] =  fib(n-1) + fib (n-2);
	}

	return res[n];
}


int main(void) {

	initialize(res);

	printf ("Fib : %d\n", fib(5));
	return 0;
}
