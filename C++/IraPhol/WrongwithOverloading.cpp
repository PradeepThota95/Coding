#include <iostream>
using namespace std;

void foo()
{
	cout <<  "This is foo void \n";
}
int foo()
{
	cout << "This is foo int\n";
	return 5;
}
int main() {
	cout << foo()  << "\n";
}

	
