/*
    Take as input str, a string. Write a recursive function that checks if the string 
    was generated using the following rules and returns a Boolean value:
    a. the string begins with an 'a'
    b. each 'a' is followed by nothing or an 'a' or "bb"
    c. each "bb" is followed by nothing or an 'a' Print the value returned.
*/

#include<iostream>
using namespace std;

bool recursiveFunc(string str, int start) {
    // cout << start << " ";
    if(str[start] == '\0')
        return true;
    if(start == 0 && str[start] != 'a')    
        return false;
    if(str[start] == 'a') {
        if(str[start + 1] != '\0' && str[start + 1] != 'a' && !(str[start + 1] == 'b' && str[start + 2] == 'b'))
            return false;
    }
    if(str[start] == 'b' && str[start + 1] == 'b') {
        if(str[start + 2] != '\0' && str[start + 2] != 'a')
            return false;
        return recursiveFunc(str, start + 2);
    }
    return recursiveFunc(str, start + 1);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    bool result = recursiveFunc(str, 0);
    if(result)
        cout << "The string satisfies the given conditions" << endl;
    else 
        cout << "The string does not satisfy the given condition" << endl;
    return 0;
}