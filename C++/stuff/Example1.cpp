// This is the sample program for understanding the setw() & setfill() functions in C++

#include <iomanip>
#include <iostream>
using namespace std;

int main() {

//	cout << 1 << "\n" << 10 << "\n" << 100  << endl;
	cout <<setw(5) << 1 << endl;

	cout << setw(5) << 10 << endl;

	cout << setw(5) << 100 << endl;

	//cout << setw(5) << "----" << endl;
	cout  << setfill('-') << setw(5) << 111 << endl;

	cout << setw(5) << 111 << endl;
	cout << setw(5) << 111 << endl;
	cout << setw(5) << 111 << endl;
	cout << setw(5) << 111 << endl;

	cout << setfill(' '); //  needs to reset otherside it is going to continue for long.

	cout << setw(5) << 111 << endl;
	cout << setw(5) << 111 << endl;
	cout << setw(5) << 111 << endl;
	cout << setw(5) << 111 << endl;
	cout << setw(5) << 111 << endl;


}
