#include <iostream>
using namespace std;

int sum  (int& x, int& y , int& z) {
	return x+y+z;
}
int main() {
	int x = 10, y = 20, z = 30; 
	cout << sum(x, y, z) << endl;
	return 0;
}
