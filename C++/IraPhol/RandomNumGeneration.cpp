#include <iostream>
#include <cstdlib>  /* rand() is provided in <cstdlib> */
using namespace std;

void PrintRandom(int k) {

	int r, smallest, biggest;
	r = smallest = biggest = rand();
	cout  << r;

	for (int i = 1; i < k; ++i) {
		if (i % 5 == 0)
			cout << endl;
		else
			cout << '\t';
		
		r = rand();
		biggest = r > biggest ? r : biggest;
		smallest = r < smallest ? r : smallest;
		cout << r;
	}
	cout << endl << "\n\nCount: " << k << "\nMaximum: " << biggest << "\nMinimum: " << smallest << endl;
}
int main() {
	int n = 0, seed = 0;
	cin >> n >> seed;
	srand(seed);
	PrintRandom(n);
	
	return 0;
}
