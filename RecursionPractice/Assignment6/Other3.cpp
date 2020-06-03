/*
    Take as input str, a string. The string contains a single pair of parenthesis “(..)”.
    Write a recursive function which returns the contents between the parenthesis.
    E.g. for “xyz(abc)def” return “abc”. Print the value returned.
*/

#include<iostream>
using namespace std;

string recursiveFunc(string str, string out, int start) {
    if(str[start] == '\0')
        return out;
    if(str[start] == '(') {
        int i;
        for(i = start + 1; str[i] != ')'; i++) {
            out += str[i];
        }
        return out;
    }
    return recursiveFunc(str, out, start + 1);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    string result = recursiveFunc(str, "", 0);
    cout << "The elements of " << str << " in parenthesis are " << result << endl;
    return 0;
}