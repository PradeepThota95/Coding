#include <iostream>
using namespace std;

enum c_kind {general, wholesale, retail};
class customer {
	public:
		void setname (const string& f_name, const string& l_name){
			last_name = l_name;
			first_name = f_name;

		}

		c_kind get_kind() const {
			return t;
		}

		void set_kind (c_kind k) {
			t = k;
		}

		void show () const {
			cout << (first_name + " " + last_name) << "\n";
		}

		double price_discount () const;
	private:
		string last_name, first_name;
		int id_number;
		c_kind t;
};

double customer::price_discount () const {
	if (t == wholesale)
		return 0.20;
	else
		return 0.1;
}


int main() {
	customer c, d;

	c.setname("Pradeep", "Thota");
	c.set_kind(wholesale);
	c.show();

	cout << "\nYou are charging " << 1200 * (1 - c.price_discount()) << " Dollars \n";
}	
