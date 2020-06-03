/*
    Take as input str, a string. A “twin” is defined as two instances of a char separated by a char. 
    E.g. "AxA" the A's make a “twin”. “twins” can overlap, so "AxAxA" contains 3 “twins” - 2 for A and 1 for x. 
    Write a function which recursively counts number of “twins” in a string. Print the value returned.
*/

#include<iostream>
using namespace std;

int countTwins(string str, int start) {
    if(str[start] == '\0') 
        return 0;
    if(str[start] == str[start + 2])
        return 1 + countTwins(str, start + 1);
    return countTwins(str, start + 1);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    int count = countTwins(str, 0);
    cout << "The number of twins are : " << count << endl;
    return 0;
}