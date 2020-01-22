#include <iostream>
using namespace std;


int main() {
	int a[10];
	
	for(int i = 1; i <= 10; ++ i)
		a[i] = i;

	for(int i = 1; i <= 10; ++ i)
		cout << a[i] << " ";

	cout  << "\n";
}
