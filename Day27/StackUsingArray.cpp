#include <iostream>
using namespace std;

class Stack {
	int top;
	public:
		int a[10];
		Stack() {
			top = -1;
		}
		void push(int n) {
			if(top >= 10) {
				cout << "Stack overflow" << endl;
			}
			else {
				a[++top] = n;
				cout << "Element inserted: " << a[top] << endl;
			}
		}
		int pop() {
			if(top < 0) {
				cout << "stack underflow" << endl;	
				return 0;
			}
			else {
				int x = a[top--];
				cout << "Element popped : " << x << endl;
				return x;
			}
		}
		void isEmpty() {
			if(top < 0) {
				cout << "stack empty" << endl;	
			}
			else {
				cout << "stack is not empty" << endl;
			}
		}
		void printStack() {
			for(int i = 0 ; i <= top; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
};

int main() {
	// your code goes here
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.printStack();
	s.pop();
	s.printStack();
	return 0;
}