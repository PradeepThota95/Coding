// This is demo program to understand stacks in stl

#include <iostream>
#include <stack> // The header file should be included to use STL stack containers 
using namespace std;


void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << " ";
	}
}

int main() {
	stack <int> st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);

	cout << "The stack contains : " ;
       	printStack(st);


	st.pop();

	cout << "The stack (after pop) contains : " ;
	printStack(st);

	return 0;
}
