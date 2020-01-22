#include <iostream>
#include <cstring>

using namespace std;


void *Memcpy(const void *src, void *dst, unsigned int n){
	const char *from = (const char *) src;
	char *to = (char *) dst;

	for(int i = 0; i <= n; ++ i)
		to[i] = from[i];

	//to[n] = '\0';
	return dst;
}

int main() {
	char s1[] = "Hello";
	char s2[10];

	cout << (char *)Memcpy(s1, s2, strlen(s1)) << endl;
}
