#include <iostream>
using namespace std;

int count = 0;
void howmany (int a[], int sz, int x, int& count) {

	for(int i = 0; i < sz; ++ i) 
		count += (a[i] == x);  // Refers Local Count  Incremented if x matches with any of the element in the array.

	::count ++; // Global Count  Incremenented once when this function called.
}

int main() {
	int a[] = {1, 2, 3, 4, 5, 5, 5};

	int c = 0;

	howmany(a, 7, 3, c);
	howmany(a, 7, 5, c);
	howmany(a, 7, 5, c);
	howmany(a, 7, 5, c);
	howmany(a, 7, 5, c);
	howmany(a, 7, 5, c);
	howmany(a, 7, 0, c);
	cout << "count : " << count <<  "\t c : " << c << endl;
}
