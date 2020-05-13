//Factorial using recursion

#include <iostream>
using namespace std;

int fact(int i) {
	if(i == 1) { // base condition
		return 1;	
	}
	return i * fact(i-1); // recursive condition
}

int main() {
	// your code goes here
	int s = fact(5);
	cout << s << endl;
	return 0;
}