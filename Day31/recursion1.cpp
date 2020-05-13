//Compute the sum of n positive numbers using recursion

#include <iostream>
using namespace std;

/*void inc(int i) {
	if(i==0) //base condition
		return;
	cout << i << endl;
	inc(i-1); // recursive condition
}*/

int sum(int i) {
	if(i == 1) { // base condition
		return 1;	
	}
	return i + sum(i-1); // recursive condition
}

/*void sum(int n) {
	int sum = 0;
	for(int i=1;i<=n;i++) {
		sum += i;
	}
	cout << sum << endl;;
}*/



int main() {
	// your code goes here
	//sum(5);
	//inc(5);
	int s = sum(5);
	cout << s << endl;
	return 0;
}