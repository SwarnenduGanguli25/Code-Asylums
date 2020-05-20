/*
    The atoi() function takes a string (which represents an integer) as an argument and returns its value.
*/

#include<iostream>
#include<cmath>
using namespace std;

int stringToInteger(string str, int i, int n) {
    if(i == n - 1) {
        return str[i] - '0';
    }
    return (str[i] - '0') * pow(10, n-i-1) + stringToInteger(str, i + 1, n);
}

int main() {
    cout << "Enter the integer" << endl;
    string str;
    cin >> str;
    int size = str.length();
    int number = stringToInteger(str, 0, size);
    cout << "The number is " << number << endl;
    return 0;
}