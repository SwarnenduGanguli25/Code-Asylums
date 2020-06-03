/*
    3. Take as input N, a number. Print the following pattern (for N = 5)
    *	*	*	*	*
    *	*	*	*
    *	*	*
    *	*
    *
*/


#include<iostream>
using namespace std;

void printRecursion(int n) {
    if(n < 0)
        return;
    for(int i = 0; i < n; i++) 
        cout << "* ";
    cout << endl;
    printRecursion(n - 1);
}

int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    printRecursion(n);
    return 0;
}