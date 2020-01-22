#include <iostream>
using namespace std;

void AngryProfessor(int a[], int n, int th)
{
	string s;
	int std_prnt = 0;

	for(int i = 0; i < n; ++ i)
	{
		if(a[i] <= 0)
			++ std_prnt;
	}
	if(std_prnt < th)
		s = "YES";
	else
		s = "NO";

	cout << s << endl;
}

int main()
{
	int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; ++ i)
		cin >> a[i];

	AngryProfessor(a, n, k);

	return 0;
}
