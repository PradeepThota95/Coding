#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "Enter String : ";
	cin >> s;

	string s1 = s.substr(0, 2);
	cout << "Sub string : "  << s1 << endl ;

	return 0;
}
