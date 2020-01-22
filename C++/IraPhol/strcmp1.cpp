#include <iostream>
#include <cstring>
using namespace std;

bool streq1(const char* s1, const char* s2) {
	while(*s1 != '\0' && *s2 != '\0') {
		if (*s1 ++ != *s2 ++)
			return false;

		return (*s1 == *s2);
	}	
}

bool streq2 (const char s1[], const char s2[]) {
	int i;
	for( i = 0; s1[i] != '\0' && s2[i] != '\0'; ++ i)
		if(s1[i] != s2[i])
			return false;

	return (s1[i] == s2[i]);
}

int main() {
	string s = "Pradeep";
	string s1 = "Thota";

	cout << "String Equality: " << streq1(s1, s) << "\n";
	cout << "String Equality: " << streq1(s1, s1) << "\n";
	cout << "String Equality: " << streq2(s1, s) << "\n";
	cout << "String Equality: " << streq2(s1, s1) << "\n";
	return 0;
}
