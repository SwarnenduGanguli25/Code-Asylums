/*
    Take as input N, the size of array. Take N more inputs and store that in an array. 
    Take as input M, a number. Write a recursive function which returns the first index
    at which M is found in the array and -1 if M is not found anywhere. Print the value returned.
*/

/*
    Take as input N, the size of array. Take N more inputs and store that in an array. 
    Take as input M, a number. Write a recursive function which returns true 
    if M is contained in the array and false otherwise. Print the value returned.
*/

#include<iostream>
using namespace std;

int searchFunc(int arr[], int ele, int start, int n) {
    if(start >= n)  
        return -1;
    if(ele == arr[start])
        return start;
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
    int result = searchFunc(arr, m, 0, n);
    if(result != -1)
        cout << "The element is present in the array at " << result << " index" << endl;
    else
        cout << "The element is not present in the array" << endl;
    return 0;
}