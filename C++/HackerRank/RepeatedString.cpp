/* This program is used to find repeated 'a' in the given string which is repeated "N times" */

#include <iostream>
#include <string.h>

using namespace std;


int FindCount(string s, int len)
{
	int count = 0;
	for(int i = 0; i < len; ++ i) {
		if(s[i] == 'a')
			++ count;
	}
	return count;
}

int RepeatedString(string s, int len, int N)
{
	if( (len == 1) && s[0] == 'a')
		return N;

	int count_of_a = FindCount(s, len);

	if(count_of_a == 0)
		return 0;

	else {
		if(N % len == 0)
			return ((N / len) * count_of_a);
		else {
			int temp_count = FindCount(s, N%len);
			return ( ((N / len) * count_of_a) + temp_count); 
		}
	}
}

int main()
{
	string s;

	cout << "Enter String : ";
	cin >> s;

	cout << "Enter N : ";
	int max;
	cin >> max;

	cout << "character 'a' " << "repeated "  << RepeatedString(s, s.length(), max) << " times " << endl;
	
	return 0;
}
