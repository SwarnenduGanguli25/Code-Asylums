#include <iostream>
using namespace std;

class Stack {
	int top;
	public:
		char a[10];
		Stack() {
			top = -1;
		}
		void push(char n) {
			if(top >= 10) {
				cout << "Stack overflow" << endl;
			}
			else {
				a[++top] = n;
				cout << "Element inserted: " << a[top] << endl;
			}
		}
		void pop() {
			if(top < 0) {
				cout << "stack underflow" << endl;	
				return ;
			}
			else {
				char x = a[top--];
				cout << "Element popped : " << x << endl;
				return ;
			}
		}
		bool isEmpty() {
			if(top < 0) {
				return true;
			}
			else {
				return false;
			}
		}
		void printStack() {
			for(int i = 0 ; i <= top; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		bool Cp(string s) {
		    for(int i=0; i < s.length(); i++) {
		        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
		            push(s[i]);
		        } 
		        else {
		            if(s[i] == ')' && a[top] == '(') {
		                pop();
		            }
		            else if(s[i] == '}' && a[top] == '{') {
		                pop();
		            }
		            else if(s[i] == ']' && a[top] == '[') {
		                pop();
		            }
		            else {
		                return false;
		            }
		            
		        }
		    }
		    if(isEmpty()) {
		        return true;
		    }
		    else {
		        return false;
		    }
		}
};

int main() {
	// your code goes here
	Stack s;
	if(s.Cp("{()}[]")) {
	    cout << "Balanced" << endl;
	}
	else {
	    cout << "Not Balanced" << endl;
	}
	
	return 0;
}