#include <stdio.h>
#include <string.h>

void Rec(char *s, int len)
{
	int tempm_len = 0;
	char str[len];

	/*if(len+1 == strlen(s))
		printf("{%s}",s);

	else {
		while(*(s+len)) {
			printf("{%c}, ",  *(s+len));
			++ len;
		}
	}*/

	while(*(s+len))
	{
		printf("{");
		
		printf(" %c ", s[len]);
		printf("}");
		++ len;
	}


	printf("\n");
}
int main()
{
	char *s = "abc";
	for(int i = 0; i < 3; ++ i)
		Rec(s, i);
}

