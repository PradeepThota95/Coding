#include <iostream>
using namespace std;

int howManyGames(int p, int d, int m, int s) {
  if (p<=m)
  
	  return s/m;
  else
	  return 1+howManyGames(p-d,d,m,s-p);
}

int main()
{
	int p = 0, d = 0, m = 0, s =0;
	cin >> p >> d >> m >> s;
	cout << howManyGames(p, d, m, s) << endl;
	return 0;
}
