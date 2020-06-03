/*
    Take as input str, a number in form of a string. 
    Write a recursive function to find the sum of digits in the string. 
    Print the value returned.
*/

#include<iostream>
using namespace std;

int recursiveSum(string str, int start) {
    if(str[start] == '\0')
        return 0;
    return (str[start] - '0') + recursiveSum(str, start + 1);
    
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    int sum = recursiveSum(str, 0);
    cout << "Sum : " << sum << endl;
    return 0;
}