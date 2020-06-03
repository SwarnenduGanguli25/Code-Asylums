/*
    Take as input str, a string. 
    Write a function which tests if the string is a palindrome or not and returns a Boolean value. 
    Print the value returned.
*/

#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int n) {
    if(start >= n)
        return true;
    if(str[start] != str[n])
        return false;
    return isPalindrome(str, start + 1, n - 1);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    bool result = isPalindrome(str, 0, str.length() - 1);
    if(result) 
        cout << str << " is palindrome" << endl;
    else 
        cout << str << " is not palindrome" << endl;
    return 0;
}