/*
    26. Take as input str, a string
        a. Write a recursive function which counts, the number of times “aaa” appears in the string. 
           Print the value returned.
        b. Write a recursive function which counts, the number of times “aaa” appears in the string, 
           but only such instances of “aaa” should be considered which do not overlap. 
           Print the value returned.
*/

#include<iostream>
using namespace std;

int countWithOverlap(string str, int start) {
    if(str[start] == '\0')
        return 0;
    if(str[start] == 'a' && str[start + 1] == 'a' && str[start + 2] == 'a')
        return 1 + countWithOverlap(str, start + 1);
    return countWithOverlap(str, start + 1);
}

int countWithoutOverlap(string str, int start) {
    if(str[start] == '\0')
        return 0;
    if(str[start] == 'a' && str[start + 1] == 'a' && str[start + 2] == 'a')
        return 1 + countWithoutOverlap(str, start + 3);
    return countWithoutOverlap(str, start + 1);
}

int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    int count1 = countWithOverlap(str, 0);
    cout << "Number of times \"aaa\" appeared in " << str << " is : " << count1 << endl;
    int count2 = countWithoutOverlap(str, 0);
    cout << "Number of times \"aaa\" appeared without overlapping in " << str << " is : " << count2 << endl;
    return 0;
}