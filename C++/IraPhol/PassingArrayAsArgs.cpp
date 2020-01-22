#include <iostream>
using namespace std;

void fun(int a[])   // int a[] similar to int *a;
{
	cout << "The size of array : " << sizeof(a) << endl; // Print 8
}

int main() {
	int a[] = {1, 2, 3, 4, 5};
	cout << "The size of array (actual) : " << sizeof(a) << endl; // 12
	fun(a);
	return 0;
}
