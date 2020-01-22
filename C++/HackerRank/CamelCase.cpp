#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {

	int count = 0;
	for(int i = 0; s[i] != '\0'; ++ i) {
		if(s[i] >= 'A' &&   s[i] <= 'Z' || i == 0)
			++ count;
	}
	return count;
}

int main()
{
    string s;
    getline(cin, s);
    int result = camelcase(s);
    cout << result << "\n";
    return 0;
}

