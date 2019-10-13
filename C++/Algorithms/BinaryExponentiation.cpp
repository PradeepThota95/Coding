/*
 * This program is used to compute the "a ^ n" in O(logn) time.
 * The Bruteforce solution gives solution by multipling the given number with itself 'N' times.
 * We are using binary form of exponent to reduce the multiplications.
 *
 * Resource link: https://cp-algorithms.com/algebra/binary-exp.html
 */

#include <iostream>
using namespace std;

int RecBinXponentAlg(int a, int n)
{
	int ret;

	if (n == 0)
        return 1;
	
	if(n % 2)

		return RecBinXponentAlg(a, n / 2) * RecBinXponentAlg(a, n / 2) * a;
	else
		return RecBinXponentAlg(a, n / 2) * RecBinXponentAlg(a, n / 2);

	/*ret = BinaryExponentiation(a, n / 2);
	
	if (n % 2)
		return ret * ret * a;
	else
		return ret * ret; */
}


int IterBinXponentAlg(int a, int n)
{
	int res = 1;
	while(n > 0)
	{
		if(n & 1)
			res = res * a;
		a *= a;
		n >>= 1;
	}
	return res;
}
int main(void)
{
	int base = 0, xponent = 0;

	cout << "Enter number : ";
	cin >> base;

	cout << "Enter exponent : ";
	cin >> xponent;

	//cout << "The value of " <<base << "  power " << xponent << " is : " << BinaryExponentiation(base, xponent) << endl;
	cout << "The value of " <<base << "  power " << xponent << " is : " << IterBinXponentAlg(base, xponent) << endl;
	return 0;
}
