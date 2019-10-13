#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter three integers : ";
	cin >> a >> b >> c;
	cout << "\nValues entered are : " << a << " and "  << b << endl;
	cout << "Twice the sum of your integers plus "  << c <<  "is $"  << 2 *(a+b+c) + 7 << " - bye!" << endl;

	return 0;
}
