// Find if duplicate parenthesis is present
// https://www.techiedelight.com/find-duplicate-parenthesis-expression/
#include<bits/stdc++.h>
using namespace std;

void checkDuplicate(string s) {
	if(s.length() == 0) {
		cout << "No duplicate parenthesis present" << endl;
		return;
	}
	vector<char> arr;
	for(int i=0; i < s.length(); i++) {
		if(s[i] != ')') {
			arr.push_back(s[i]);
		}
		else if(s[i] == ')') {
			if(arr.back() == '(') {
				cout << "Duplicate parenthesis present" << endl;
				return;
			}
			while(arr.back() != '(') {
				arr.pop_back();
			}
			arr.pop_back();
		}
	}
	cout << "Duplicate parenthesis not present" << endl;
}

int main() {
	// your code goes here
	string s = "((x+y))+z";
	checkDuplicate(s);
	return 0;
}