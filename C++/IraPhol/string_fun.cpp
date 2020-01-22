#include <iostream>
//#include <cstring>
using namespace std;

size_t strlen( const char* s) {
	int len = 0;

	int i; 
	for(i = 0; s[i] != '\0'; i ++)
		continue;

	return i;

}

int strcmp (const char* s1, const char* s2) {
	int i;
	for(i = 0; s1[i] && s2[i] && (s1[i] == s2[i]); ++ i)
		continue;

	return (s1[i] - s2[i]);
}


char* strcpy (char *s1, char* s2) {
	for(int i = 0; s1[i] = s2[i]; ++ i)
		continue;

	return s1;
}


int main() {
	char *s1 = "pradeep";
	char *s2 = "thota";
	char s[10];

	cout << "strlen : " << strlen(s1) << "\n";
	cout << "strcpy : " << strcpy(s, s2) << "\n";
	cout << "strcmp : " << strcmp(s1, s1) << "\n";
	cout << "strcmp : " << strcmp(s1, s2) << "\n";

	return 0;
}
