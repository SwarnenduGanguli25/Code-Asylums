/*
    Take as input str, a string. 
    Write a recursive function which moves all ‘x’ from the string to its end. 
    E.g. for “abexexdexed” return “abeedeedxxx”. Print the value returned.
*/

#include<iostream>
using namespace std;

string recursiveFunc(string str, int start) {
    if(str[start] == '\0')
        return "";
    if(str[start] == 'x') {
        string temp =  recursiveFunc(str, start + 1);
        return temp + "x";
    }
    return str[start] + recursiveFunc(str, start + 1);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    string result = recursiveFunc(str, 0);
    cout << "Required string : " << result << endl;
    return 0;
}