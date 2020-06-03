/*
    Take as input str1 and str2, both strings. 
    Write a function which tests if str2 is reverse of str1 or not and returns a Boolean value. 
    Print the value returned.
*/

#include<iostream>
using namespace std;

bool isReverse(string str1, string str2, int start, int end) {
    if(str1.length() != str2.length())
        return false;
    if(start > end)
        return true;
    if(str1[start] != str2[end])
        return false;
    return isReverse(str1, str2, start + 1, end - 1);
}

int main() {
    cout << "Enter string 1 and string 2" << endl;
    string str1, str2;
    cin >> str1 >> str2;
    bool result = isReverse(str1, str2, 0, str1.length() - 1);
    if(result) {
        cout << str2 << " is reverse of " << str1 << endl;
    }
    else 
        cout << str2 << " is not reverse of " << str1 << endl;
    return 0;
}