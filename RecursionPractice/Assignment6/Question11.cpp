/*
    Take as input N, a number. Take N more inputs and store that in an array. 
    Write a recursive function which tests if the array is a palindrome and returns a Boolean value. 
    Print the value returned.
*/

#include<iostream>
using namespace std;

bool isPalindrome(int arr[], int start, int end_) {
    if(start >= end_)
        return true;
    if(arr[start] != arr[end_])
        return false;
    return isPalindrome(arr, start + 1, end_ - 1);
}

int main() {
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    bool result = isPalindrome(arr, 0, n - 1);
    if(result)
        cout << "The array is a palindrome" << endl;
    else
        cout << "The array is not a palindrome" << endl;
    return 0;
}