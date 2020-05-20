#include<iostream>
using namespace std;

int main() {
    cout << "Enter n" << endl;
    int n;
    cin >> n;
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
    cout << n << "! = " << result << endl;
    return 0;
}