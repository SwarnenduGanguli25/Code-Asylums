/*
    given a number print its equivalent string 
    eg 
    i/p 2048 
    o/p two zero four eight
*/

#include<iostream>
using namespace std;

string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void equivalentString(int num) {
    if(num / 10 == 0) {
        cout << arr[num] << " ";
        return;
    }
    equivalentString(num / 10);
    cout << arr[num%10] << " ";
}

int main() {
    cout << "Enter the number" << endl;
    int num;
    cin >> num;
    equivalentString(num);
    cout << endl;
    return 0;
}