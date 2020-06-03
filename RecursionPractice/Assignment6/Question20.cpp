/*
    Take as input str, a string. 
    Write a recursive function which returns a new string in which 
    all duplicate consecutive characters are separated by a ‘*’. 
    E.g. for “hello” return “hel*lo”. Print the value returned.
*/

#include<iostream>
using namespace std;

string recursiveFunc(string str, int start) {
    if(str[start] == '\0')
        return "";
    if(str[start] == str[start + 1])
        return str[start] + "*" + recursiveFunc(str, start + 1);
    return str[start] + recursiveFunc(str, start + 1);
}

int main() {
    cout << "Enter string" << endl;
    string str;
    cin >> str;
    string result = recursiveFunc(str, 0);
    cout << "Required string : " << result << endl;
    return 0;
}