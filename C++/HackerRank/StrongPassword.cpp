#include <bits/stdc++.h>
using namespace std;

#define MIN_LEN 6
int minimumNumber(int n, string s) {
	cout << s.size() << endl;
	int nflag = 0;
	int sflag = 0;
	int lflag = 0;
	int uflag = 0;
 	for(int i = 0; s[i] != '\0'; ++ i) 
	{
		if ( (s[i] >= '0' && s[i] <= '9') && nflag == 0)  
			nflag = 1;
		else if (s[i] >= 'A' && s[i] <= 'Z' && uflag == 0)
			uflag = 1;
		else if (s[i] >= 'a' && s[i] <= 'z' && lflag == 0)
			lflag = 1;
		else if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i]  == '%' || s[i] == '^' || s[i] == '&' || s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+') {
			sflag = 1;
		}
		       	
	}
	int len = 4 - (nflag + sflag + lflag + uflag);
	if(n + len < 6)
		len += 6- (n+len);

	return len;

}
int main()
{
	int len = 0;
	string psw;
	
	cin >> len;
	cin >> psw;
	cout << minimumNumber(len, psw) << endl; 

	return 0;
}
