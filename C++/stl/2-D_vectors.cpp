#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector < vector <int> > v(5, vector<int> (5));




	for(int i = 0 ; i < 5; ++ i)
	{
		for(int j = 0; j < v[i].size(); ++ j)
			v[i][j] = 1;
	}
	for(int i = 0 ; i <5; ++ i)
	{
		for(int j = 0; j <6; ++ j)
			cout << v[i][j] << " ";
		cout << "\n";
	}

	return 0;
}
