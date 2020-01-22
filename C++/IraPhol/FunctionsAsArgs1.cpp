#include <iostream>
using namespace std;

int square(int n)
{
	return n * n;
}

void Fun(int a(int),int  n) {
	for( int i = 1; i <= n; ++ i)
		cout << "Square of number " << i << " is " << a(i) << "\n";
}	
int main() {
	Fun(square, 5);
	return 0;
}
