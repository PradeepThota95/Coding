#include <iostream>
using namespace std;


class test {
	int a;

	friend void show (test  s);
};
void show (test s) {
		cout << "Enter the value of 'a' : " ;
		cin >> s.a;
}

int main()
{
	test s;
	show(s);
	cout << s.a << endl;
	return 0;
}
