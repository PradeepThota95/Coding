#include <iostream>
using namespace std;

class test1;
class test2;

class test1 {
	int a;
	public:
	void geta() {
		cout << "Enter the value of a :  ";
		cin >> a;
	}
	friend void big (test1, test2);
};


class test2 {
	int b;
	public:
	void getb() {
		cout <<  "Enter the value of b : ";
		cin >> b;
	}
	friend void big (test1, test2);
};


void big (test1 t1, test2 t2) {
	if (t1.a > t2.b)
		cout << "A is greater \n";
	else
		cout << "B is greater \n";
}
int main() {
	test1 t1;
	test2 t2;
	t1.geta();
	t2.getb();
	big(t1, t2);
	return 0;
}
