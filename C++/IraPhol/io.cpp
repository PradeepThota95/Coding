#include <iostream>
using namespace std;

int main()
{
	int i;
	double x;

	cout << "Enter a double : ";
	cin >> x;

	cout << "Enter a positive integer : ";
	cin >> i;

	if(i < 1)
	{
		cerr << "error i =  " << i << endl;
		return 1;
	}

	return 0;
}
