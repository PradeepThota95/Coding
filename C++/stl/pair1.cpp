#include <iostream>
#include <utility>
using namespace std;
int main()
{
	pair <int , int> p;
	p.first = 10;
	p.second = 20;
	
	cout << p.first << endl;
	cout << p.second << endl;

	// Using make_pair
	pair <int, char> p1;
	p1 = make_pair(1,'a');
	cout << p1.first << endl;
	cout << p1.second << endl;

	//using values
	pair <int , char > p2(1, 'a');
	
	cout << p2.first << endl;
	cout << p2.second << endl;

	pair <int, int> p3 (10,20);
	pair <int, int> p4(p3);
	cout << p4.first << endl;
	cout << p4.second << endl;


        p2.swap(p4);	
	
	return 0;

}
