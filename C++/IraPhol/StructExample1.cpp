#include <iostream>
using namespace std;

struct point {
	int x, y;
};

point average(const point* d, int sz) {
	point sum  = {0, 0};

	for(int i = 0; i < sz; ++ i)
	{
		sum.x += d->x;
		sum.y += d->y;

		++ d;
	}

	cout << "x" << sum.x  << "\n";
	cout << "y" << sum.y  << "\n";
	return sum;
}
int main() 
{
	point data[4] = { {1, 2}, {3, 4}, {5, 6}, {7, 8} };
	point average_point;

	average_point = average(data, 4);
	cout << "Average_point: x " << average_point.x << ",\t Average_point: y " << average_point.y;
	return 0;
}
