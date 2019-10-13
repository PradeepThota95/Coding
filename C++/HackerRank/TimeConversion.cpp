#include <bits/stdc++.h>
#include  <string.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string str) {
    /*
     * Write your code here.
     */
	int t1 = (int )str[0] - '0';
	int t2 = (int )str[1] - '0';
	int t = t1*10 + t2%10;
	string out_string;

	if(str[8] == 'A')
	{
		if(t==12)
		{
			out_string = "00";
			string s2 = str.substr(2,10);
			strcat(out_string, s2);

		}
		else
		{
			return str;	
		}
	}
	else
	{
		if(t == 12)
		{
			out_string = "12";
			for(int i = 2; i <= 9; ++ i)
				strcat(out_string, str[i]);
		}
		else
		{
			t = t + 12;
			out_str = (string) t;
			for(int i = 2; i <= 9; ++ i)
				strcat(out_string, str[i]);
		}
	}

	return out_string;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

