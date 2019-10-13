#include <iostream>

using namespace std;

double Average(int N, double &sum)
{
	double data;

	cout << "Enter "<< N << "Number of doubles : " ;
	for(int i = 0; i < N; ++ i)
	{
		cin >> data;
		sum += data;
	}

	return sum/N;
}

int Average(int N, int &sum)
{
	int data;

	cout << "Enter " << N << "Number of Integers : " ;
	for(int i = 0; i < N; ++ i)
	{
		cin >> data;
		sum += data;
	}

	return static_cast<double> (sum)/N;
}

int main()
{
	int isum = 0;
	double dsum = 0.0;

	cout << "Integer Average : " << Average(5, isum) << endl;
	cout << "Double Average : " << Average(5,dsum) << endl;

}
