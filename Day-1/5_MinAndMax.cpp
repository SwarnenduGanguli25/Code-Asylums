#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[] = {6, 4, 5, 9};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	int max = INT_MIN;
	int min = INT_MAX;
	cout << "INT_MIN : " << max << " INT_MAX : " << min << endl;
	for(int i=0; i<arr_size; i++) {
		if(arr[i] < min){
			min = arr[i];
		}
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	
	cout << "Min: " << min << " Max: " << max << endl;
	return 0;
}