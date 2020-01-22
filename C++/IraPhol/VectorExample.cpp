#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> a) {
	int s = 0;
	for(int i = 0; i < a.size(); ++ i)
		s += a[i];
	return s;
}

int main() {
	vector<int> a(10);
	for(int i = 0; i < 10; ++ i)
		a[i] = i;
	cout << sum(a) << endl;
	return 0;
}
