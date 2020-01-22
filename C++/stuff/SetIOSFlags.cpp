#include <iostream>
#include <iomanip>

int main() {
	
	std::cout << std::setw(5) << std::setiosflags(std::ios::left) << "rama\n";
	std::cout << std::setiosflags(std::ios::oct) << 65 << "\n";
	std::cout << std::setiosflags(std::ios::oct) <<  120 << "\n";
}
