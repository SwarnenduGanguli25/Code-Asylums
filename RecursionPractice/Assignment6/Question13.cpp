/*
    Take as input N, a number. Take N more inputs and store that in an array. 
    Write a recursive function which inverses the array. Print the values of inverted array.
*/

#include<iostream>
using namespace std;

int main() {
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    return 0;
}