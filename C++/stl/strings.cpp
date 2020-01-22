#include <iostream>
#include <string> // The String class

int main()
{
	std::string s;
	getline (std::cin, s);
	std::cout << "\nThe string entered is : " << s << "\n";

	s.push_back ('T');
       //	s.push_back("hota"); // Using Push_back we can't add a String 
	std::cout << "The string " << s << "\n";
	std::cout << "Capacity of string :  " << s.capacity() << "\n";
	std::cout << "Length of the string :  " << s.length() << "\n";
	
	s.shrink_to_fit();

	std::cout << "Length of the string :  " << s.length() << "\n";
	std::cout << "Capacity of string :  " << s.capacity() << "\n";

	std::cout << "The second char of string : " << s[2] << "\n";
	return 0;
}
