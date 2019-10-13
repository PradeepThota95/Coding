#include <iostream>
using namespace std;



void Rec(char *s, int len)
{
	int tempm_len = 0;
	while(*(s+len))
	{
		cout << *(s+len) << endl;
		++ len;
	}
}
int main()
{
	char *s = "abc";
	for(int i = 0; i < 3; ++ i)
		Rec(s, i);
}

