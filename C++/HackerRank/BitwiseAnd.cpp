/* This program is used to find Maximum A&B whose value less than K */

#include <iostream>
using namespace std;

int FindMaxABltK(int N, int K)
{
	int Max = -1, 
	    A = 0,
	    B = 0;

	if(K == 0 || N == 0)
		return;

	if(N < K)
		return;

	for(int i = 1; i <= N; ++ i)
		for(int j = (i + 1); j <= N; ++ j)
		{
			int ret = (i&j);
			if( (ret < K) && ret >= Max)
			{
				Max = ret;
				A = i;
				B = j;
			}
				
		}

	//cout << "A B  :  " << A << "  " << B << endl;
	return (A&B);
}
int main()
{
	int N = 0,
	    K = 0 ;

	cout << "Enter the value of N : ";
	cin >> N;

	cout << "Enter K : ";
	cin >> K;

	FindMaxABltK(N,K);
	return 0;
}
