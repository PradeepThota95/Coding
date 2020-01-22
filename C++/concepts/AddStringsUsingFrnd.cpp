#include <iostream>
using namespace std;

class stringdemo {
	public :
		string name;
		void getname(string x) {
			name = x;
		}

		stringdemo operator+(stringdemo&, stringdemo&);
}

stringdemo stringdemo:: operator+(stringdemo& d1, stringdemo& d2){
	stringdemo d3;
	d3.name = d1.name + d2.name;
	return d3;
}

int main()
{
	stringdemo d1;
	d1.getname("Pradeep");
	stringdemo d2;
	d2.getname("Thota");
	stringdemo d3;
	d3 = d1 + d2;

	cout << d3.name << endl;
}
