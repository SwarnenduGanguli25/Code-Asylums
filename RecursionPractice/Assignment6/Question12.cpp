/*
    Take as input N, a number. Take N more inputs and store that in an array. 
    Write a recursive function which reverses the array. Print the values of reversed array.
*/

#include<iostream>
using namespace std;

void swap(int* arr, int start, int end_){
    int temp = *(arr + start);
    *(arr + start) = *(arr + end_);
    *(arr + end_) = temp;
}

void reverseArray(int* arr, int start, int end_) {
    if(start >= end_)
        return;
    swap(&arr[0], start, end_);
    reverseArray(&arr[0], start + 1, end_ - 1);
} 

int main() {
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    reverseArray(&arr[0], 0, n - 1);
    cout << "The reversed array is : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl; 
    return 0;
}