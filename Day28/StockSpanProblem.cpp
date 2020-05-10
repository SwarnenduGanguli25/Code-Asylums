//The Stock span problem
//https://www.geeksforgeeks.org/the-stock-span-problem/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[] =  {100, 80, 60, 70, 60, 75, 85};
	int size = sizeof(arr)/sizeof(arr[0]);
	int span[size]={0};
	for(int i=size-1; i >= 0; i--) {
		for(int j = i; j >=0 ; j--) {
			if(arr[j] <= arr[i])
				span[i]++;
			else {
				break;
			}
		}
	}
	cout << "The span is : ";
	for(int i=0;i<size;i++)
		cout << span[i] << " ";
	cout << endl;
	return 0;
}