#include <iostream>
using namespace std;

struct point {
	int x, y, z;
};


int main ()
{
	struct point pt;
	pt.x = 1;
	pt.y = 2;
	pt.z = 3;

	cout << pt.x << endl;
	cout << pt.y << endl;
	cout << pt.z << endl;
}
