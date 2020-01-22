/* Sample Program to understand setprecision() 
 *  */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double f = 3.14159;
	cout << (22/7) << "\t" << f << endl;
	cout << setprecision(2) << f << endl;
	cout << setprecision(5) << f << endl;
	cout << setprecision(9) << f << endl;
	cout << fixed;
	cout << setprecision(5) << f << endl;
	cout << setprecision(9) << f << endl;
}
