#include <assert.h>
#include <iostream>
using namespace std;

int main() {
	int* data;
	int size;

	cout << "Enter the size of array : " ;
	cin >> size;

	data = new int[size]; // allocating the array of size
	assert(data != 0); // data != 0 allocation succesful
	for(int i = 0; i < size; ++ i)
		cout << (data[i] = i) <<  "\t" ;
	cout << "\n";

	delete[] data;
	return 0;
}
