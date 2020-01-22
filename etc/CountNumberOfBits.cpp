#include <iostream>
using namespace std;

void Countbits(unsigned int x) {
	int  num_bits = 0;
	while(x)
	{
		num_bits += x  & 1;
		x >>= 1;
	}

	cout << num_bits << endl;
}

int main()
{
	unsigned int num = 0;
	cin >> num;
	Countbits(num);
	return 0;
}

