#include <iostream>
#include <array>
using namespace std;

int main()
{
	const int n = 6;
	//cin >> n;
	
	array <int, n> ar = { 1,2,3,4,5,6};

	cout << "Using get   : " << get<0> (ar) << " " << get<1> (ar) << endl;
	return 0;
}
