//Reduce the array to a single integer with the given operation
//https://www.geeksforgeeks.org/reduce-the-array-to-a-single-integer-with-the-given-operation/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n = 3;
	long unsigned int arr[3];
	for(int i = 0; i < n; i++) 
		arr[i] = i+1;
	int top = n - 1;
	int sum = 0, a, b;
	for(int i = 0 ; i < n-1; i++) {
		a = arr[top--];
		b = arr[top--];
		sum = (a*a) + (b*b);
		arr[++top] = sum;
	}
	cout << "The required output is " << arr[top] << endl;
	return 0;
}