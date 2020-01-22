#include <iostream>
using namespace std;

/*namespace first {
	int value = 100;
}
*/
namespace first {
	int value = 200;
	//double value = 200;
}
int value = 300;

int main()  {
	int value = 400;
	cout << first::value << "\n";

	return 0;
}
