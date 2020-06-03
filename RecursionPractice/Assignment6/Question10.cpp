/*
    Take as input N, the size of array. Take N more inputs and store that in an array.
    Take as input M, a number. Write a recursive function which returns an array containing
    indices of all items in the array which have value equal to M. 
    Print all the values in the returned array.
*/

#include<iostream>
#include<vector>
using namespace std;


vector<int> result;

vector<int> searchFunc(int arr[], int ele, int start, int n) {
    
    if(start >= n)  
        return result;
    if(ele == arr[start])
        result.push_back(start);
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
    result = searchFunc(arr, m, 0, n);
    if(result.size() != 0){
        cout << "The element is present at following indices : " ;
        for(int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
        cout << endl;
    }
    else
        cout << "The element is not present in the array" << endl;
    return 0;
}