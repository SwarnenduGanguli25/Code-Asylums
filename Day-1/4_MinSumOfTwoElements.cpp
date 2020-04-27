#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[] = {6, 4, 7, 5};
	int min1 = arr[0];
	int min2 = INT_MAX;
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	for(int i=1; i < arr_size; i++) {
		if(arr[i] < min1) {
			min2 = min1;
			min1 = arr[i];
		}	
		else if(arr[i] < min2){
			min2 = arr[i];
		}
	}
	int min_sum = min1 + min2;
	cout << min_sum << endl;
	return 0;
}