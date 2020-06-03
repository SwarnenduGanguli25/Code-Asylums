/*
    Take as input str, a string.
        ◦ Write a recursive function which counts the number of times ‘hi’ appears in the string 
            – but skip all such ‘hi’ which are followed by ‘t’ to form ‘hit’. Print the value returned.
        ◦ Write a recursive function which removes all ‘hi’ in the string – but skip all
            such ‘hi’ which are followed by ‘t’ to form ‘hit’. Print the value returned.
        ◦ Write a recursive function which replaces all ‘hi’ in the string with ‘bye’ 
            – but skip all such ‘hi’ which are followed by ‘t’ to form ‘hit’. Print the value returned.
*/

#include<iostream>
using namespace std;

int countHi(string str, int start) {
    if(str[start] == '\0')
        return 0;
    if(str[start] == 'h' && str[start + 1] == 'i') {
        if(str[start + 2] == 't')
            return countHi(str, start + 3);
        else 
            return 1 + countHi(str, start + 2);
    }
    return countHi(str, start + 1);
}

string removeHi(string str, int start) {
    if(str[start] == '\0')
        return "";
    if(str[start] == 'h' && str[start + 1] == 'i') {
        if(str[start + 2] == 't')
            return "hit" + removeHi(str, start + 3);
        else
            return removeHi(str, start + 2);
    }
    return str[start] + removeHi(str, start + 1);
}

string replaceHi(string str, int start) {
    if(str[start] == '\0')
        return "";
    if(str[start] == 'h' && str[start + 1] == 'i') {
        if(str[start + 2] == 't')
            return "hit" + replaceHi(str, start + 3);
        else
            return "bye" + replaceHi(str, start + 2);
    }
    return str[start] + replaceHi(str, start + 1);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    int count = countHi(str, 0);
    cout << "The number of times \"hi\" appeared without being followed by 't' in " << str << " is : " << count << endl;
    string result1 = removeHi(str, 0);
    cout << str << " after removing \"hi\" which is not followed by 't' is : " << result1 << endl;
    string result2 = replaceHi(str, 0);
    cout << str << " after replacing all \"hi\" with \"bye\" which is not followed by 't' : " << result2 << endl;
    return 0;
}