/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
using namespace std;


int Result (long a[], int n) {
    int x = a[0];
    int d = a[1]/a[0];
    long long F = (x + d) * (n-1);
    
    return (F * (F+1))/2;
}

int main() {
    int t;
    cin >> t;
    
    while(t --)
    {
        int n;
        cin >> n;
        long a[n];
        
        
        for(int i = 0; i < n; ++ i)
            cin >> a[i];
            
            
        cout << Result(a, n) << endl;
    }
    return 0;
}
