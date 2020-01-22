#include "pgm.h"

int main()
{
	char ans;
	int k, n = N;

	cout << "This Program does not do Much " << endl;
	cout << "Do you want more information (y/n) :   ";
	cin >> ans;

	if(ans == 'y' || ans == 'Y')
		prn_info("I am called from multi-main");

	for (k = 0; k < n; ++ k)
		fun1(k);


	cout << "Best Regards \n";

	return 0;
}
