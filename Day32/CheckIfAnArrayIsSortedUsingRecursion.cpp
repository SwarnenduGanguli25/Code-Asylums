// check if an array is sorted using recursion
#include <iostream>
using namespace std;

void sorted(int arr[], int i) {
	if(i == 0) {
		cout << "Sorted" << endl;
		return;
	}
	if(arr[i] < arr[i-1]) {
		cout << "Unsorted" << endl;
		return;
	} 
	sorted(arr, i-1);
}
 
int main() {
	// your code goes here
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr)/sizeof(arr[0]);
	sorted(arr, size - 1);
	return 0;
}