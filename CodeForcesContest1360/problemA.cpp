#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], result[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int min_side, max_side, side;
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) {
            min_side = a[i];
            max_side = b[i];
        }
        else {
            min_side = b[i];
            max_side = a[i];
        }
        side = max(2*min_side, max_side);
        result[i] = side * side;
    }
    for(int i = 0; i < n; i++)
        cout << result[i] << endl;
    return 0;
}