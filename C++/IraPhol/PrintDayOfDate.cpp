#include <iostream>
using namespace std;

int main()
{
	//char *Date;
	char Date[10];
	//Date = (char *) (sizeof(char) * 10);
	cout << "Enter date : ";
	cin >> Date;

	cout << "Entered date : " << Date << endl;

	return 0;
}
