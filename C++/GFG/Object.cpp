#include <iostream>
using namespace std;

class person {
	public: 
		string name;
		int age = 20;
	private: 
		int sal;
};

int main()
{
	person p1;
	p1.name =  "Pradeep";
	p1.age = 25;
	cout << " Person name : " << p1.name  << " Age = " << p1.age << endl;
	return 0;
}
