/*Write a program to find the length of a string using pointers .
 Examples: Input : given_string = "geeksforgeeks"
  Output : length of the string = 13 
  Input : given_string = "coding" 
  Output : length of the string = 6*/

#include<iostream>
using namespace std;

int main() {
	char input_string[100];
	cout << "Enter the string \n";
	cin >> input_string;
	char *ptr = input_string;
	int count = 0;
	while(*ptr != '\0') {
		count++;
		ptr++;
	}
	cout << "length of the string = " << count << endl;
	return 0;
}