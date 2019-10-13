#include <iostream>
#include<bits/stdc++.h>

using namespace std;
const int N=40;

inline void sum(int *p, int n, vector<int> vect)
{
	*p = 0;
	for(int i = 0; i < n; ++ i)
		*p = *p + vect[i];
}

int main()
{
	int accum = 0;
	vector<int> vect;
	for(int i = 0; i < N; ++ i)
		vect.push_back(i);
	sum(&accum, N, vect);
	cout << "sum is " << accum << endl;
	return 0;
}

