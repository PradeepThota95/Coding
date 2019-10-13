#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
	if(n < 10)
		return n;
	else
		return (n%10) + sumOfDigits(n/10);
}

int main()
{
	int num = 0;
	cout << "Enter an Integer to find its sum of digits :  ";
	cin >> num;

	cout << "Sum of digits of " << num << " is : " << sumOfDigits(num) << endl;
	return 0;
}
