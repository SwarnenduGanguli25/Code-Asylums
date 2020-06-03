#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int ele;
    cin >> ele;
    int n[ele], k[ele], n_temp, k_temp, gcd_temp, result[ele], big;
    for(int i = 0; i < ele; i++) {
        cin >> n_temp >> k_temp;
        if(k_temp >= n_temp)
            result[i] = 1;
        else {
            for(int j = n_temp/2; j >= 1; j--) {
                if(j <= k_temp && n_temp % j == 0) {
                    big = j;
                    break;
                }
            }
            result[i] = n_temp/big;
        }
    }
    for(int i = 0; i < ele; i++)
        cout << result[i] << endl;
    return 0;
}