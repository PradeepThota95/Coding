#include <iostream>
using namespace std;

int main()
{
	cout << "Size of integer is : " <<  sizeof(int) << endl;
	cout << "size of long is : " << sizeof(long) << endl;


	cout << numeric_limits<int>::max() << " is the maximum int.\n";
	cout << numeric_limits<float>::max() << " is the maximum float.\n";

	return 0;
}
