#include <iostream>
using namespace std;


int  Add(int sum)
{
	return sum+=1;
}

void function(int fcn(int), int N, int incr)
{
	int sum = 0;
	while(N--)
	{
		 sum += fcn(N);
	}
	cout << "The sum of N numbers is : " << sum << endl;
}
int main()
{
	int N = -1;
	cout << "Enter the value of N : ";

	cin >> N;

	function(Add,N,1);
}
