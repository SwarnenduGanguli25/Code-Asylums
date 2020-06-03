/*
    Take as input N, the size of array. Take N more inputs and store that in an array. 
    Write a recursive function which bubble sorts the given array. Print all the values in the sorted array.
*/

#include<iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp; 
}

void bubbleSort(int arr[], int n) {
    cout << "Bubble Sort without recursion : ";
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

void bubbleSortRecursion(int* arr, int n) {
    if(n <= 0)
        return;
    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[i + 1])
            swap(&arr[i], &arr[i + 1]);
    }
    bubbleSortRecursion(&arr[0], n - 1);
}

int main() {
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    bubbleSort(arr, n);
    bubbleSortRecursion(&arr[0], n - 1);
    cout << "Bubble Sort with recursion : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}