// Length of string using recursion
#include <iostream>
using namespace std;



int length(char s[], int i) {
	if(s[i] == '\0') {
		return 0;
	}
	return 1 + length(s, i+1);
}

int main() {
	// your code goes here
	char s[] = "Girish";
	int n = length(s, 0);
	cout << n << endl;
	return 0;
}