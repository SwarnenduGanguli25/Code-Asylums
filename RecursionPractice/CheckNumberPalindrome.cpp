/* 
    Given an integer, write a function that returns true if the given number is palindrome, else false.
    For example, 12321 is palindrome, but 1451 is not palindrome.
*/

#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(vector<int>& arr, int start, int end) {
    if(start >= end)
        return true;
    if(arr[start] != arr[end]) 
        return false;
    return isPalindrome(arr, ++start, --end);
}

int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    vector<int> arr;
    int length = 0;
    while(n != 0) {
        int rem = n % 10;
        arr.push_back(rem);
        n = n/10;
        length++;
    }
    if(isPalindrome(arr, 0, length - 1))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}