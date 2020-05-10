//https://www.geeksforgeeks.org/trapping-rain-water/

#include<iostream>
using namespace std;

int max_func(int arr[], int start, int end) {
	int max = arr[start];
	for(int i = start + 1; i < end; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int min_func(int a, int b) {
	if(a < b) {
		return a;
	}
	else return b;
}

int main() {
	int n, i;
	cout << "Enter the size of the array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array" << endl;
	for(i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int left_max, right_max, min, result = 0;
	for(i=1;i<n-1;i++) {
		left_max = max_func(arr, 0, i);
		right_max = max_func(arr,i+1,n);
		min = min_func(left_max, right_max);
		if(arr[i] <= min)
			result += (min - arr[i]);
	}
	cout << result << endl;
	return 0;
}