#include<iostream>
using namespace std;

bool palindrome(string str, int start, int end) {
    if(start >= end)
        return true;
    if(str[start] != str[end]) 
        return false;
    return palindrome(str, ++start, --end);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    int size = str.length();
    bool result = palindrome(str, 0, size - 1);
    if(result) {
        cout << str << " is palindrome" << endl;
    }
    else
        cout << str << " is not palindrome" << endl;
    return 0;
}