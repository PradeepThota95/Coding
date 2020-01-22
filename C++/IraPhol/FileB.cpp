#include <iostream>
using namespace std;
namespace s
{
	int foo (int i)  {
		return 5 * i;
	}
}


int goo (int i);

int main() {
	cout << s::foo(5) << endl;
	cout << goo(25) << endl;
}

