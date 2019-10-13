#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
int carry = 0;
void miniMaxSum(vector<int> a) {

    /* Sort the given array */
    sort(a.begin(), a.end());
    long int  min_sum = 0, temp_sum = 0, carry = 0;
    int n = a.size()- 1;

    for(register int i = 0; i < 4; ++ i)
    {
	    temp_sum += a[i];
	     carry = temp_sum / 1000000000;
	     //cout << "carry : " << carry << "  i : " << i << endl;
    }
    min_sum = temp_sum;
    temp_sum = 0;
    carry = 0;

    //cout << "#####################################################" <<endl;
    for(int i=0; i <4; ++ i)
    {
	   temp_sum += + a[n-i];
	   carry = temp_sum / 1000000000;
	   //cout << "carry : " << carry << "  i : " << i << endl;
    }

    cout << min_sum << " " << temp_sum  << endl;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

