
// Given a string, print all possible palindromic partitions
/*
Input: nitin

Output: 
n i t i n
n iti n
nitin

*/
#include<iostream>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    if(start >= end)
        return true;
    if(str[start] != str[end])
        return false;
    return isPalindrome(str, ++start, --end);
}

void palindromePartition(string str,int start, int j, int end) {
    if(j > end)
        return;

    if(isPalindrome(str, start, j)) {
        for(int i = start; i <= j; i++) {
            cout << str[i];
        }
        cout << " ";
    }
    palindromePartition(str, start, ++j, end);
}

#include<iostream>
using namespace std;

int main() {
    cout << "Enter string" << endl;
    string str;
    cin >> str;
    int size = str.length();
    for(int i = 0; i < size; i++)
        palindromePartition(str, i, 0, size - 1);
    cout << endl;
    return 0;
}