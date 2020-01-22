#include <iostream>
#include <cstring>
using namespace std;

char* stringReverse(char* dst, const char* src) {
	int j = 0;
	for(int i = strlen(src) -1; i >= 0; -- i)
		dst[j ++] = src[i];

	dst[j] = '\0';

	return dst;
}
int main() {

	char s1[] = "Pradeep";
	char s2[10];

	cout << stringReverse(s2, s1) << endl;
}	
