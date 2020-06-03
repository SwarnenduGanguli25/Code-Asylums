/*
    Take as input N, the size of array. Take N more inputs and store that in an array. 
    Write a recursive function which selection sorts the given array. 
    Print all the values in the sorted array.
*/

#include<iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSortRecursion(int* arr, int start, int n) {
    if(start >= n - 1)
        return;
    int min_index = start;
    for(int i = start + 1; i < n; i++) {
        if(arr[min_index] > arr[i])
            min_index = i;
    }
    swap(&arr[start], &arr[min_index]);
    return selectionSortRecursion(&arr[0], start + 1, n);
}

int main() {
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSortRecursion(&arr[0], 0, n);
    cout << "Selection Sort with recursion : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl; 
    return 0;
}