#include <iostream>
using namespace std;

int  main() {
	int n;
//	int& ref;
	int *ref1;
	//ref = n;
	ref1 = &n;
	cin >> n;
	cout << n << "  " <<  (int)*ref1 << "\n";

	return 0;
}
