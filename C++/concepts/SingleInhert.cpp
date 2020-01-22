#include <iostream>
using namespace std;

class A {
	public :
		A()
		{
			cout << "this is class A constuctor\n";
		}
};

class B : public A{
};


int main()
{
	B ob;

	return 0;
}
