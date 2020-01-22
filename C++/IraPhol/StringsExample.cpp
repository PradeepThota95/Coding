#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char* s = "c++";
	//s[0] = 'c' s[1] = '+' s[2] = '+' s[3] = '\0';
	
	s[1] = 1;
	cout << s << endl;

	return 0;
}
