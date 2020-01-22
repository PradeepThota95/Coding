#include <iostream>
using namespace std;

class A {
	public: 
		int id_p;
};

class B : public A {
	public: 
		int id_c;
};


int main() {
	B obj;
	obj.id_c = 10;
	obj.id_p = 20;

	cout << obj.id_p << " " << obj.id_c << endl;
	return 0;
}
