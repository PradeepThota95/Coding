#include <iostream>
using namespace std;

double circle(double); // Function of scope extern prototype
int main() {
	double x;

	cout << "Enter the radius of the circle : ";
	cin >> x;

	cout << "The area of the circle with radius  " << x  << " : "<< circle(x) << endl;
	return 0;
}

