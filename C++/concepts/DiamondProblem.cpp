#include <iostream>
using namespace std;

class Person {
	public:
		char name[10];
		int id;
};

class student : public Person {
};
class faculty : public Person {
};



int main() {
	return 0;
}
