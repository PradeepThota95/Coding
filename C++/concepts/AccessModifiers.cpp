#include <iostream.h>
using namespace std;

class A {
	public:
		int id;
	protected:
		int idpd;
	private:
		int prid;
};

class B : public A {
	//id public
	//idpd protected
	//pridd can't accessable
};

class C : protected A {

};

class D : private A {
};


int main() {

	return 0;
}
