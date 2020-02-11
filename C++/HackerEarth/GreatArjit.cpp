#include <iostream>
using namespace std;


int FindF( int a[]) {
	
}


void FindQ(int a[], int n) {

	int ret = FindF (a);

	return (ret * (ret + 1))/2;
}

int main() {

	int a[] = {1, 2, 4};

	FindQ(a, 3);

	return 0;
}
