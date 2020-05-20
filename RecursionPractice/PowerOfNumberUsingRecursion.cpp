#include<iostream>
using namespace std;

int power(int x, int n) {
    if(x == 0 || x == 1) {
        return x;
    }
    if(n == 1) 
        return x;

    return x * power(x, n - 1);
}

int main() {
    cout << "Enter the number and exponent " << endl;
    int x, n;
    cin >> x >> n;
    int result = power(x, n);
    cout << x << " ^ " << n << " = " << result << endl;
    return 0;
}