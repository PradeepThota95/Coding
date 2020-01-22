#include <iostream>
using namespace std;

void printPattern(int r) {
	for(int i = r; i > 0; -- i) {
		int j = 0;
		for(; j < (i -1); ++ j)
			cout << " ";
		for(int k = i; k <= r; ++ k)
			cout << "#" ;

		cout << "\n";
	}
}

int main()
{
	int rows = 0;
	cout << "Enter Number of Rows : ";
	cin >> rows;

	printPattern(rows);
	return 0;
}
