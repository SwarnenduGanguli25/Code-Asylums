/*
    2. Take as input N, a number. Print the following pattern (for N = 5)
    *
    *	*
    *	*	*
    *	*	*	*
    *	*	*	*	*
*/

#include<iostream>
using namespace std;

void printRecursion(int start, int n) {
    if(start >= n)
        return;
    for(int i = 0; i <= start; i++)
        cout << "* ";
    cout << endl;
    printRecursion(start + 1, n);
}

int main() {
    cout << "Enter number" << endl;
    int n;
    cin >> n;
    printRecursion(0, n);
    return 0;
}