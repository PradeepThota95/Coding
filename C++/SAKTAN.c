#include <stdio.h>
int M, N;

void ModifyMatrix(int a[N][M], int  N, int M, int X, int Y)
{
	for(int i = 1; i <= N; ++ i)
		a[X][i] = a[X][i] + 1;

	for(int j = 1; j <= M; ++ j)
		a[j][Y] += 1;
}

void PrintMatrix(int a[][M], int M, int N)
{
	for(int i = 1; i <= N; ++ i) {
		for(int j = 1; j <= M; ++ j) 
			printf ("%d ", a[i][j]);
		printf("\n");
	}
}

int main()
{
	int t;
	scanf("%d", &t);

	if(t <= 0 && t >= 301)
		return -1;

	while(t --)
	{
		int Q = 0;
		M = 0, N = 0;
		scanf("%d%d%d", &N, &M, &Q);
		int arr[N][M];

		if( N >= 1 && M >= 1 && Q >= 1 && N <= 300 && M <= 300 && Q <= 300)
		{
			/* Initialize the values of array to zero */
			for(int i = 1; i <= N; ++ i)
				for(int j = 1; j <= M; ++ j)
					arr[i][j] = 0;
                        
			while(Q --)
			{
				int X = 0, Y = 0;
				scanf("%d%d", &X, &Y);
				if(X <= N && Y <= M)
					ModifyMatrix(arr, N, M, X, Y); // Modify the given row X and column Y
				//PrintMatrix(arr, N, M);

			}
                        
			int odd_count = 0;
			for(int i = 1; i <= N; ++ i)
				for(int j = 1; j <= M; ++ j) {
					if(arr[i][j])
					{	if(arr[i][j] % 2)
							odd_count ++;	
					}
				}

			printf("%d\n", odd_count); 
		}

	}
	return 0;
}
