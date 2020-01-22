#include <iostream>
using namespace std;

int FindDigits (int n) {
	int val = n;
	int count = 0;
	while (val != 0)
	{
		int res  = val % 10;
		if(res != 0)
		{
			if (n % res == 0)
				++ count;
		}
		val = val / 10;
	}

	return count;
}



int main() {
	int n;
	cin >> n;

	cout << FindDigits(n) << endl;
	return 0;
}
