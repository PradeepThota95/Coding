#include <iostream>
using namespace std;

void print_array(int a[])
{
	int i = 0;
	while(a[i])
	{
		cout << a[i++] << "" ;
	}
	cout << "\n";
}
int main()
{
	int a[] = {1,2,3,4};
	print_array(a);
	return 0;
}
