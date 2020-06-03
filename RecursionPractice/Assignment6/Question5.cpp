/*
    Take as input N, a number. Write a recursive function to find Nth triangle where 1st triangle is 1,
    2nd triangle is 1 + 2 = 3, 3rd triangle is 1 + 2 + 3 = 6, so on and so forth. Print the value returned.
*/

#include<iostream>
using namespace std;

int recursiveFunc(int start, int sum, int n) {
    if(start >= n) 
        return sum;
    sum += start + 1;
    recursiveFunc(start + 1, sum, n);
}

int main() {
    cout << "Enter n" << endl;
    int n;
    cin >> n;
    int result = recursiveFunc(0, 0, n);
    cout << "The required result is "<< result << endl;
    return 0;
}