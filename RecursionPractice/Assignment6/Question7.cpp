/*
    Take as input N, the size of array. Take N more inputs and store that in an array. 
    Take as input M, a number. Write a recursive function which returns true 
    if M is contained in the array and false otherwise. Print the value returned.
*/

#include<iostream>
using namespace std;

bool searchFunc(int arr[], int ele, int start, int n) {
    if(start >= n)  
        return false;
    if(ele == arr[start])
        return true;
    return searchFunc(arr, ele, start + 1, n);
}

int main() {
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element to search" << endl;
    int m;
    cin >> m;
    bool result = searchFunc(arr, m, 0, n);
    if(result)
        cout << "The element is present in the array" << endl;
    else
        cout << "The element is not present in the array" << endl;
    return 0;
}