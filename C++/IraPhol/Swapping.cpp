#include <iostream>

using namespace std;

inline void swap (int* a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

inline void swap(double& c, double& d)
{
	double temp;
	temp = c;
	c = d;
	d = temp;
}
int main()
{
	int a = 10, b = 20;
	cout << "value of a, b before swapping : " << a  << " "<< b << endl;
	swap(&a,&b);
	cout << "value of a, b after swapping : " << a  << " "<< b << endl;
	double c = 3.660, d = 4.444;
	cout << "value of c , d before swapping : " << c << " " << d << endl;
	swap(c,d);
	cout << "value of c , d after swapping : " << c << " " << d << endl;
	return 0;
}
