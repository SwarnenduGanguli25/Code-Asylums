//remove a specific character from a string Mango - n = Mago 
#include <iostream>
using namespace std;

string removeSpecific(char s[], char re, int i) {
	if(s[i] == '\0') {
		return "" + '\0';
	}
	if(s[i] == re) {
		return ""  + removeSpecific(s, re, i+1);
	}
	else
		return s[i]  + removeSpecific(s, re, i+1);
}

int main() {
	// your code goes here
	char s[] = "Mango";
	char re = 'n';
	string result =  removeSpecific(s, re, 0);
	for(int i=0; i < result.length(); i++) 
		cout << result[i];
	cout << endl;
	return 0;
}