#include <iostream>
#include <stack>
using namespace std;

void showStack(stack <int> s) {
}

int main()
{
	stack <int> st;
	st.push(10);
	st.push(5);
	st.push(30);
	st.push(123);
	st.push(1995);

	cout << "The stack is : ";
	showStack(st);

	cout << "The size of the stack is : " << st.size() << endl;
	cout << "Top element is : " << st.top() << endl;

	int item = st.pop();
	cout << "The element popped from the stack :  " << item << endl;
	showStack(st);
	return 0;
}
