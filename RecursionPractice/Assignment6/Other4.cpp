/*
    Take as input str, a string. The string is a mathematical expression 
    e.g. “[a + {b + (c + d) + e} + f]”. Write a recursive function which tests 
    if the brackets in expression are balanced or not and returns a Boolean value. 
    Print the value returned.
*/

#include<bits/stdc++.h>
using namespace std;

stack<char> st;

bool isBalanced(string str, int start) {
    if(str[start] == '\0') {
        if(st.empty())
            return true;
        else 
            return false;
    }
    if(str[start] == '[' || str[start] == '{' || str[start] == '(') {
        st.push(str[start]);
    }
    else if(str[start] == ']' || str[start] == '}' || str[start] == ')') {
        if(st.top() != str[start])
            return false;
        st.pop();
    }
    return isBalanced(str, start + 1);
}
 
int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    bool result = isBalanced(str, 0);
    if(result)
        cout << "The expression is balanced" << endl;
    else 
        cout << "The expression is not balanced" << endl;
    return 0;
}