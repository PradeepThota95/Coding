#include <iostream>
#include <string>
using namespace std;


int main(){
	string s = "12343214567";
	int n = s.length();
	for(int i = 0; i < n ; ++ i) {
		int k = i;
		for( int j = n -1; j > k; -- j)
		{
			if(s[k] == s[j])
			{
				cout << s[k] << " ";
				k ++;
			}
		
		}
	}
	return 0;
}
