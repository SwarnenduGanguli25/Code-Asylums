//Reverse a string using stack
//https://www.techiedelight.com/reverse-a-string-using-stack-data-structure/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s = "girish";
	vector<char> stack;
	for(int i=0; i < s.length(); i++) {
		stack.push_back(s[i]);
	}
	string result = "";
	for(int i=0; i < s.length(); i++) {
		result += stack.back();
		stack.pop_back();
	}
	cout << "The reversed string is " << result << endl;
	return 0;
}