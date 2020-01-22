#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector <int> v; // Declaration Of a Vector	
	for(int i = 0; i < 5; ++ i)
		v.push_back(i); // Inserts elements into the vector from back


	cout << "\n Output of Begin and end : ";
	for(auto i = v.begin(); i != v.end(); ++ i)
		cout << *i << " " ;

	cout << "\n output of rbegin and rend  :  ";
	for(auto i = v.rbegin(); i != v.rend(); ++ i)
		cout <<  " " << *i << " " ;

	cout << "\n output of cbegin and cend  :  ";
	for(auto i = v.cbegin(); i != v.cend(); ++ i)
		cout <<   " " << *i << " " ;

	cout << "\n output of crbegin and crend  :  ";
	for(auto i = v.crbegin(); i != v.crend(); ++ i)
		cout <<   " " << *i << " " ;
	cout << "\n";



	cout << "\nThe size of vector is : " << v.size();
	cout <<  "\nThe capacity of vector is : " << v.capacity();
	cout << "\nThe max size is : " << v.max_size();

	v.resize(4); // Resizing the vector to '4'
	
	if(v.empty() != false)
		cout << "\nVector is not empty\n";

        cout << "\nn*****************************************\n" << endl;	
	for(auto i = v.begin(); i != v.end(); ++ i)
		cout << *i << " ";
	cout << "\n";

        cout << "*****************************************" << endl;	
	v.shrink_to_fit(); // After Resize it will be useful (May be)
	for(auto i = v.begin(); i != v.end(); ++ i)
		cout << *i << " ";
	cout << "\n";

	cout << "\n Reference Operator : v[2]  : " << v[2] << endl;
	cout << "At function : at(4) : " << v.at(3) << endl;
	cout << "Front of vector : " << v.front() << endl;
	cout << "Back of Vector : " << v.back() << endl;

	v.assign(5, 10);
	v.push_back(6);
	for(int i = 0; i < v.size(); ++ i)
		cout << v.at(i) << " ";
	cout << "\n";

	v.insert(v.begin(), 1995);
	v.insert(v.end(), 2019);

	for(int i = 0; i < v.size(); ++ i)
		cout << v.at(i) << " ";
	cout << "\n";

	v.erase(v.begin());
	v.emplace(v.begin(), 5);
	v.emplace_back(1000);


	for(int i = 0; i < v.size(); ++ i)
		cout << v.at(i) << " ";
	cout << "\n";

	v.clear();
	cout << "*******************************************************" << endl;
	for(int i = 0; i < v.size(); ++ i)
		cout << v.at(i) << " ";
	cout << "\n";
	cout << "*******************************************************" << endl;
	return 0;
}
