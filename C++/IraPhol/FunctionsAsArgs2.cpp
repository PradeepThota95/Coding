#include <iostream>
using namespace std;

int cube (int n) {
	return (n * n * n);
}

void func (int fun(int), int n) {
	for( int i = 0; i < n; ++ i)
		cout << "Cube of " << i << fun(i) << endl;
}

int main() {
	func(cube, 5);
}
