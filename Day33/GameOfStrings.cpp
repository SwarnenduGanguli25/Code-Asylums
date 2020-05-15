// Game of strings - Code forces 
// https://codeforces.com/problemset/problem/1104/B?locale=en
#include <bits/stdc++.h>
using namespace std;

void gameOfStrings(char s[]) {
	vector<char> stack;
	int i = 0;
	int count = 0;
	while(s[i] != '\0') {
		if(stack.size() == 0) {
			stack.push_back(s[i]);
		}
		else {
			if(s[i] == stack.back()) {
				count++;
				stack.pop_back();
			}
			else 
				stack.push_back(s[i]);
		}
		i++;
	}
	if(count%2 == 1) {
		cout << "Yes" << endl;
	}
	else 
		cout << "No" << endl;
}

int main() {
	// your code goes here
	char s[] = "abacaba";
	gameOfStrings(s);
	return 0;
}