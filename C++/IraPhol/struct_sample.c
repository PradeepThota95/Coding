#include <stdio.h>

struct point {
	int x, y;
};

struct point average(struct point* d, int sz) {
	struct point sum  = {0, 0};

	for(int i = 0; i < sz; ++ i)
	{
		sum.x += d->x;
		sum.y += d->y;

		++ d;
	}

	return sum;
}
int main() 
{
	struct point data[4] = { {1, 2}, {3, 4}, {5, 6}, {7, 8} };
	struct point average_point;

	average_point = average(data, 4);
	//cout << "Average_point: x " << average_point.x << ",\t Average_point: y " << average_point.y;
	printf("%d \t %d \n", average_point.x, average_point.y);
	return 0;
}
