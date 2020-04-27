#include <bits/stdc++.h>
using namespace std;

int thirdMax(int arr[], int arr_size){
	if(arr_size < 3) 
		exit(0);
	int first = arr[0], second = INT_MIN, third = INT_MIN;
	for(int i=1; i < arr_size; i++) {
		if(arr[i] > first) {
			third = second;
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second) {
			third = second;
			second = arr[i];
		}
		else if(arr[i] > third){
			third = arr[i];
		}
	}
	return third;
}

int main() {
	// your code goes here
	int arr[] = {6, 4};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	cout << thirdMax(arr, arr_size) << endl;
	printf("%d", thirdMax(&arr[0], arr_size));
	return 0;
}