#include <iostream>
using namespace std;

const double lbs_to_kg = 2.2046,
             inches_to_meter = 39.370;
int main()
{
	int weight = 0,
	    height = 0;

	double kilograms = 0,
	       meters = 0;

	cout << "Enter weight in Pounds : ";
	cin >>  weight;
	kilograms = weight / lbs_to_kg;

	cout << "\nThis is approximately " << static_cast<int>(kilograms) << "kg." << endl;

	cout << "\nEnter height in inches: ";
	cin >> height;
	meters = height/inches_to_meter;
	cout << "\nYour BMI is approximately " << "body fat ratio is "<< kilograms/(meters * meters) << ". Under 25 is good." << endl;
	return 0;
}
