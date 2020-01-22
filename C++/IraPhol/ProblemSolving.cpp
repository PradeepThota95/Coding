#include <iostream>
using namespace std;

extern double average(double a[], int sz);
extern double minimum(double a[], int sz);
extern double maximum(double a[], int sz);
const int sz  = 6; 
int main() {
	double a[6] = {0.5, 1.5, 6.0, 7.5, 2.3, 4.6};
	cout << "Test array data processing\n";

	//cout << "Average = " << average(a, 6) << "\n";
	cout << "Minimum = " << minimum(a,6) << "\n";
	cout << "Maximum = " << maximum(a,6) << "\n";

	return 0;
}
