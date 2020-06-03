/*
    Take as input N, the size of array. Take N more inputs and store that in an array. 
    Write a recursive function which returns true if the array is sorted and false otherwise.
    Print the value returned.
*/

#include<iostream>
using namespace std;

bool recursiveFunc(int arr[], int start, int n) {
    if(start >= n - 1)
        return true;
    if(arr[start] > arr[start + 1])
        return false;
    return recursiveFunc(arr, start + 1, n);
}

int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    bool result = recursiveFunc(arr, 0, n);
    if(result)
        cout << "The array is sorted" << endl;
    else
        cout << "The array is not sorted" << endl;
    return 0;
}