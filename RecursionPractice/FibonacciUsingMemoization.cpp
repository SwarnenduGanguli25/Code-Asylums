#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n, int memo[]) {
    if(n <= 1) {
        memo[n] = n;
        cout << n << endl;
        return n;
    }
    if(memo[n] != -1)
        return memo[n];
    
    memo[n] = fibonacci(n-1, memo) + fibonacci(n-2, memo);
    return memo[n];
}

int main() {
    cout << "Enter the number of fibonacci numbers" << endl;
    int n;
    cin >> n;
    int memo[n];
    memset(memo, -1, sizeof(memo));
    int num = fibonacci(n, memo);
    cout << "The number is " << num << endl;
    return 0;
}