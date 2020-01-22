#include <iostream>
using namespace std;
void fizzBuzz(int n)
{
	if (n%15 == 0)
		cout << "FizzBuzz" << endl;
	else if(n%5 == 0)
		cout << "Buzz" << endl;
	else if(n%3 == 0)
		cout << "Fizz" << endl;
}
int main() {
	int n;
	cin >> n;


	fizzBuzz(n);
	return 0;
}
