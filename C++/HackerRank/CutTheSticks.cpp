#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int CutTrees (int a[],int  n)
{
	sort(a, a+n);
	for(int i = 0 ; i < n; ++ i)
	{

	cout << "\n";
	return 0;
}
int main()
{
	int sz = 0;
	cin >> sz;
	int a[sz];

	for(int i = 0; i < sz; ++ i)
		cin >> a[i];

	cout << CutTrees(a, sz) << endl;
	return 0;
}
