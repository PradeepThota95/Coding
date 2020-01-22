#include <stdio.h>

int main()
{
	char s[100];
	freopen("file.txt" , "w", stdout);
	printf("input :");
	gets(s);
	printf("%s", s);
	return 0;
}
