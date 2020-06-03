#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num, temp, min1, min2, index;
    string result[n];
    vector<int> input;
    int odd = 0, even = 0, diff = 0;
    for(int i = 0; i < n; i++){
        cin >> num;
        for(int j = 0; j < num; j++){
            cin >> temp;
            input.push_back(temp);
        }
        sort(input.begin(), input.end());
        for(int item : input) {
            if(item % 2 == 0)
                even++;
            else 
                odd++;
        }
        for(int k = 0; k < input.size() - 1; k++) {
            if(input[k + 1] - input[k] == 1)
                diff++;
        }
        int inter = (even%2 + odd%2);
        if(inter <= 2 * diff)
            result[i] = "YES";
        else
            result[i] = "NO";
        input.clear();
        odd = 0;
        even = 0;
        diff = 0;
    }
    for(int i = 0; i < n; i++)
        cout << result[i] << endl;
    return 0;
}