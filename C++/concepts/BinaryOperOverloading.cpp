#include <iostream>
using namespace std;


class demo {
	int a, b;
	public: 
	void getdata(int x, int y){
		a = x;
		b = y;
	}
	void display();
	demo operator+(demo& op);
};

demo demo::operator +(demo& op) {
	demo temp;
	temp.a = this->a + op.a;
	temp.b = this->b + op.b;
	
	return temp;
}

void demo::display()
{
	cout << a << "\t" << b << endl;
}

int main() {
	demo d1,d2,d3;
	
	d1.getdata(10,20);

	d2.getdata(40,50);

	d3 = d1 + d2;
	d3.display();
	return 0;
}
