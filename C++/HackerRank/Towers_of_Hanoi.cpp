#include <iostream>

using namespace std;

void Tower(int n, char SRC, char DST, char AUX)
{
	if (n == 1)
	{
		cout << "Move Disk 1 from " << SRC << " to " << DST << endl;
		return;
	}

	Tower(n-1, SRC, AUX, DST);
	cout << "Move Disk " << n << " from " << SRC << " to " << DST << endl;
	Tower(n-1, AUX, DST, SRC);
}
int main()
{
	int num_of_disks = 0;
	cout << "Enter The Number of Disks  : ";
	cin >> num_of_disks;

	Tower(num_of_disks, 'A', 'B', 'C');

	return 0;
}
