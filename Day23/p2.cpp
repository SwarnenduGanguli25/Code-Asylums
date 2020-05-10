/*Program to compare two string using pointers Given two strings, compare the strings using pointers
 Examples: Input: str1 = geeks, str2 = geeks Output: Both are equal 
 Input: str1 = hello, str2 = hellu Output: Both are not equal As their length are same but characters are different*/

#include<iostream>
using namespace std;

int main() {
	char string1[100], string2[100];
	cout << "Enter the first string" << endl;
	cin >> string1;
	cout << "Enter the second string" << endl;
	cin >> string2;
	int flag = 0;
	char *ptr1 = string1, *ptr2 = string2;
	while(*ptr1!='\0' && *ptr2!='\0') {
		if(*ptr1 != *ptr2) {
			flag = 1;
		}
		ptr1++;
		ptr2++;
	}
	if((*ptr1 == '\0' && *ptr2 == '\0') && flag == 0) {
		cout << "Both are equal" << endl;
	}
	else if ((*ptr1 == '\0' && *ptr2 == '\0') && flag == 1) {
		cout << "Both are not equal as their length are same but characters are different" << endl;
	}
	else {
		cout << "Both are not equal as their length and characters are different" << endl;
	}
	return 0;
}