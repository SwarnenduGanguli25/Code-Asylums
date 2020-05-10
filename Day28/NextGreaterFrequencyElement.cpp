//Next Greater Frequency Element
//https://www.geeksforgeeks.org/next-greater-frequency-element/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[] = {1, 1, 2, 3, 4, 2, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int frequency[size]={0},i,j;
	for(i=0;i<size;i++) {
		 for(j=0; j < size; j++) {
		 	if(arr[i] == arr[j]) {
		 		frequency[i]++;
		 	}
		 }
	}
	int output[size] = {0};
	for(i=0; i < size; i++) {
		for(j = i + 1; j  < size; j++) {
			if(frequency[j] > frequency[i]) {
				output[i]++;
			}
		}
		if(output[i] == 0)
			output[i] = -1;
	}
	cout << "The output is : "; 
	for(i=0;i<size;i++)
		cout << output[i] << " ";
	cout << endl;
	return 0;
}