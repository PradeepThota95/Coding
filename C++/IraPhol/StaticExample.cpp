#include <iostream>
using namespace std;

void function()
{
	static int called;

	++ called;
	cout << "static vavriable : " << called << endl;
}

int main()
{
	for(int i = 0; i < 10; ++ i)
		function();
	return 0;
}
