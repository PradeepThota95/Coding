#include <iostream>
using namespace std;

double average(const int size, double &dsum) {
	double data = 0;
	for(int i = 0; i < size; ++ i) {
		cin >> data;
		dsum += data;
	}
	return dsum / size;
}
int average(const int size, int &isum) {
	int data = 0;
	for(int i = 0; i < size; ++ i) {
		cin >> data;
		isum += data;
	}
	return isum / size;
}

int main() {
	int isum = 0;
	double dsum = 0;

	cout << average(5, isum) <<  endl;
	cout << average(5, dsum) <<  endl;

	return 0;
}
