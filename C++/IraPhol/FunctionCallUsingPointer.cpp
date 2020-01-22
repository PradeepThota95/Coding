#include <iostream>
using namespace std;

int* function() {
	int x = 5;
	cout << "Called using Pointer\n" ;
	return &x;
}

void fun(int a) {
	cout << "Hey  Thota.... Good to see you\n";
}	
int main() {
	int *p = function();
	void *q = &fun(10);
	return 0;
}
