/*
    Given a set of characters and a positive integer k, 
    print all possible strings of length k that can be formed from the given set.

    Input: 
    set[] = {'a', 'b'}, k = 3

    Output:
    aaa
    aab
    aba
    abb
    baa
    bab
    bba
    bbb

*/

#include<iostream>
using namespace std;

void printStringsOfLengthK(char set[], string prefix, int k, int n) {
    if(k == 0)
    {
        cout << prefix << " ";
        return;
    }
    for(int i = 0; i < n; i++) {
        string newPrefix;
        newPrefix = prefix + set[i];
        printStringsOfLengthK(set, newPrefix, k - 1,n);
    }
}



int main() {
    cout << "Enter the length of set of characters" << endl;
    int n;
    cin >> n;
    char set[n];
    cout << "Enter the characters" << endl;
    for(int i = 0; i < n; i++)
        cin >> set[i];
    cout << "Enter k" << endl;
    int k;
    cin >> k;
    printStringsOfLengthK(set, "", k, n);
    cout << endl;
    return 0;
}