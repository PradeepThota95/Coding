#include <iostream>
using namespace std;


class A {
	public: 
		A()
		{
			cout << "This is class A constuctor \n";
		}
};

class B {
	protected:
		B() {
			cout << "this is class  B constructor \n";
		}
};

class C : public A, private B { // A's constuctor and followed by B's 
};


int main() {
	C c1;
	return 0;
}
