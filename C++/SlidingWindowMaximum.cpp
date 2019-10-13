#include <iostream>
using namespace std;

void SlidingWindowMaximum(int a[], int N, int K)
{

   for (int i = 0; i <= (N - K); i++)
   {
     int max = a[i];
     for (int  j = i; j <= (K - 1 + i); j ++)
     {
       if(a[j] > max)
          max = a[j];
     }
     cout << "max  : " << max <<'\n';
   }
}

int main()
{
  int arr_sz = 0;

  cout << "Enter the size of array : ";
  cin >> arr_sz;

  cout << "Enter elements of array : " << '\n';
  int arr[arr_sz];
  for(int i = 0; i < arr_sz; ++ i){
    cin >> arr[i];
  }

  int k = 0;
  cout << "Enter sliding window size : ";
  cin >> k;

  SlidingWindowMaximum(arr, arr_sz, k);
  return 0;
}
