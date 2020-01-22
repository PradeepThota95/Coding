#include <iostream>
#include <cstring>

using namespace std;

bool streq(const char* s1, const char* s2, int n)
{
	if (strlen(s1) < n || strlen(s2) < n) 
		cout << "string lengths are less than given size \n"; 
	while (n-- &&  *s1 != 0 && *s2 != 0)
		if ( *s1++ != *s2++)
			return false;
	
	return (*s1 == *s2);
}

int main() {
	char *s1 = "Pradeep";
	char *s2 = "PradeeP";

	cout <<  streq(s1, s2, 40) << "\n";
	cout <<  streq(s1, s2, 3) << "\n";
	return 0;
}
