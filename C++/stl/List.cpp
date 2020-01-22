#include <iostream>
#include <list>
using namespace std;

void show_list(list <int> l)
{

	list<int>::iterator it;
	for(it = l.begin(); it != l.end(); ++it)
		cout << *it << " ";
}


int main()
{
	list <int> l1, l2;

	for(int i = 0; i <= 10; ++ i) {
		l1.push_back(i * 2);
		l2.push_front(i * 3);
	}

	//l2.reverse();
	cout << "\nList-1 is  : ";
	show_list(l1);

	//l2.sort();
	cout << "\nList-2 is  : ";
	show_list(l2);

	cout << endl;
	l1.merge(l2);
	show_list (l1);
	cout << endl;
	return 0;
}
