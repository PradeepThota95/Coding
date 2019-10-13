#include <iostream>
using namespace std;


void BeautifulArrays(int a[], int N) 
{
	int flag = 0;

	for(register int i = 0; i < N; ++ i) 
	{
	       for(register int j = 0; j < N; ++ j) 
	       {
		       if(i == j)
			       break;

		      int ret = (a[i] * a[j]);
		      for(register int k = 0; k < N; ++ k) 
		      {
			      if(a[k] == ret) {
				      cout << "yes" << endl;
				      flag = 1;
				      break;
			      }
		      }
		      if(flag == 1)
			      break;
	       }
	       if(flag == 1)
		       break;
	}
	if(flag == 0)
		cout << "no" << endl;
}


int main()
{
	int t = 0, arr_sz = 0;

	cout << "Enter the Number of Testcases : ";
	cin >> t;
	while(t --)
	{

        
		cout << "Enter the size of arrays : ";
		cin >> arr_sz;
        
		cout << "Enter the elements of the array : ";
		int arr[arr_sz];
		for(int i = 0; i < arr_sz; ++ i)
			cin >> arr[i];
        
		BeautifulArrays(arr, arr_sz);
	}
	return 0;
}
