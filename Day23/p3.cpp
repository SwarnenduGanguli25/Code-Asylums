/*Given an array, write a program to reverse it using pointers . 
Input : array = 2, 4, -6, 5, 8, -1 Output : reverse_array = -1, 8, 5, -6, 4, 2*/


#include<iostream>
using namespace std;

int main() {
	int n, i;
	cout << "Enter the length of the array \n";
	cin >> n;
	int arr[n];
	cout << "Enter the elements of the array\n";
	for(i=0;i<n;i++)
		cin >> arr[i];
	int *ptr = arr;
	for(i = n - 1; i >= 0; i--)
		cout << *(ptr + i) << " ";
	cout << endl;
	return 0;
}