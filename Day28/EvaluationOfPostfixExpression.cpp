// Evaluation of postfix expression
// https://www.geeksforgeeks.org/arithmetic-expression-evalution/
#include <bits/stdc++.h>
using namespace std;



int evaluatePostfix(string exp) {
	vector<int> stack;
	for(int i = 0; i < exp.length(); i++) {
		if(isdigit(exp[i])) {
			stack.push_back(exp[i] - '0');
		}
		else {
			int val1 = stack.back();
			stack.pop_back();
			int val2 = stack.back();
			stack.pop_back();
			switch(exp[i]) {
				case '+' :
						stack.push_back(val1 + val2);
						break;
				case '-' :
						stack.push_back(val2 - val1);
						break;
				case '*' :
						stack.push_back(val1 * val2);
						break;
				case '/' :
						stack.push_back(val2 / val1);
						break;
			}
		}
	}
	return stack.back();
} 

int main() {
	// your code goes here
	string exp = "234*+"; // 2+3*4
	cout << "The value of the expression is " << evaluatePostfix(exp) << endl;
	return 0;
}