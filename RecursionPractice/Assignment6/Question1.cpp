/*
    1. Take as input N, a number. Print odd numbers in decreasing sequence (up until 0)
    and even numbers in increasing sequence (up until N). E.g. for N = 6 print 5, 3, 1, 2, 4.
*/

#include<iostream>
using namespace std;

void printRecursion(int n) {
    if(n == 0)
        return;
    if(n % 2 == 0) {
        printRecursion(n - 1);
        cout << n << " ";
    }
    else {
        cout << n << " ";
        printRecursion(n - 1);
    }
        
}

int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    printRecursion(n);
    return 0;
}