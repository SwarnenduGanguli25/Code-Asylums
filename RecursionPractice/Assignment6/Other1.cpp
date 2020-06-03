/*
    1. Take as input str, a string. Assume that value of a=1, b=2, c=3, d=4, z=26. Write
       a recursive function (return type void) to print all possible codes for the string. E.g.
       for “1123” possible codes are aabc, kbc, alc, aaw, kw.
*/

#include<iostream>
using namespace std;

void recursiveFunc(string str, string out, int start) {
    if(str[start] == '\0') {
        cout << out << " ";
        return;
    }
    for(int i = start; i < str.length(); i++) {
        if((int)out <= 26) 
            out += str[i];

    }
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    recursiveFunc(str, "", 0);
    return 0;
}