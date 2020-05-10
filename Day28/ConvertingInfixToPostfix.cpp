//Converting infix to postfix
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char ch) {
	if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
		return true;
	}
	return false;
}

bool isOperator(char ch) {
	if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '(') {
		return true;
	}
	return false;
}

int precedence(char ch) {
	switch(ch) {
		case '*' :
		case '/' :
		case '%' :
					return 3;
		case '+' :
		case '-' :
					return 2;
		case '(' :
					return 4;
		default: 
					return 0;
	}
}

string infixToPostfix(string exp) {
	int i = 0;
	vector<char> stack;
	string result = "";
	for(i=0; i < exp.length(); i++) {
		if(isOperand(exp[i])) {
			result += exp[i];
		}
		else if(isOperator(exp[i])) {
			if(stack.size() == 0) {
				stack.push_back(exp[i]);
			}
			else if(precedence(stack.back()) < precedence(exp[i])) {
				stack.push_back(exp[i]);
			}
			else if(precedence(stack.back()) >= precedence(exp[i])){
				while(precedence(stack.back()) >= precedence(exp[i])) {
					result += stack.back();
					stack.pop_back();
				}
				stack.push_back(exp[i]);
			}
		}
		else if(exp[i] == ')') {
			while(stack.back() != '(') {
				if(stack.size() == 0) {
					cout << "Unbalanced expression " << endl;
					return 0;
				}
				result += stack.back();
				stack.pop_back();
			}
			stack.pop_back();
 		}
	}
	while(stack.size() != 0) {
		result += stack.back();
		stack.pop_back();
	}
	return result;
}

int main() {
	// your code goes here
	string exp = "a+b*d/e";
	cout << "The postfix expression is " << infixToPostfix(exp) << endl;
	
	return 0;
}