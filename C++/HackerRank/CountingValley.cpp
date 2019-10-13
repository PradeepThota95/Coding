#include <iostream>
#include <string>

using namespace std;

int CountingValley(string s)
{
	int sea_level = 0,
	    valley = 0;

	for(register int i = 0; i < s.length(); ++ i)
	{
		if(s[i] == 'U') {
			sea_level ++;
			if(sea_level < 0)
				valley --;
		}

		else if(s[i] == 'D')
		{
			sea_level --;
			if(sea_level < 0)
				valley ++;
		}
	}
	return valley;
}


int main()
{
	string s;
	cin >> s;

	cout << s;

	cout << CountingValley(s) << endl;
}
