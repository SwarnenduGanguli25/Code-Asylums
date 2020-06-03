/*
    Take as input str, a number in form of a string. 
    Write a recursive function to convert the number in string form to number in integer form. 
    E.g. for “1234” return 1234. Print the value returned.
*/

#include<iostream>
using namespace std;

int convertToInteger(string str, int n) {
    if(n < 0) 
        return 0;
    return (str[n] - '0') + convertToInteger(str, n - 1) * 10;
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    int num = convertToInteger(str, str.length() - 1);
    cout << "num : " << num << endl;
    return 0;
}