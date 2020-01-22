#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setbase(2) << 11  <<endl;
	cout   << 110  <<endl;
	cout   << 111  <<endl;
	cout   << 112  <<endl;
	cout   << 113  <<endl;
	cout << setbase(8) << 11  <<endl;
	cout << setbase(10) << 11 <<endl;
	cout << setbase(16) << 110 <<endl;
	cout << setbase(16) << 111 <<endl;
	cout << setbase(16) << 112 <<endl;
	cout << setbase(16) << 113 <<endl;
}
