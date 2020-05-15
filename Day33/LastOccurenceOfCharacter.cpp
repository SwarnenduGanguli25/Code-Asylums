// Last Occurence of Character
#include <iostream>
using namespace std;

int lastOccurence(string s, char re, int i) {
	if(i == -1) {
		 return -1;
	}
	if(s[i] == re) {
		return i;
	}
	return lastOccurence(s, re, i-1);
} 

int main() {
	// your code goes here
	string s = "Girish";
	char re = 'i';
	int index = lastOccurence(s, re, s.length() - 1);
	if(index == -1)
		cout << "Not found" << endl;
	else
		cout << "Element found at " << index + 1<< endl;
	return 0;
}