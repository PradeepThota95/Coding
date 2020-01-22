#include <iostream>
using namespace std;
class Encapsulation {

	private:
		int var;

	public:
		void set(int x) {
			var = x;
		}
		int get() {
			return var;
		}
};


int main() {
	Encapsulation obj;
	obj.set(5);
	cout << obj.get() << endl;
	return 0;
}
