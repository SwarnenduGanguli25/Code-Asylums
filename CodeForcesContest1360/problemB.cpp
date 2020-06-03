#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num, temp, min1, min2, index;
    int result[n];
    vector<int> input;
    for(int i = 0; i < n; i++){
        cin >> num;
        for(int j = 0; j < num; j++){
            cin >> temp;
            input.push_back(temp);
        }
        min1 = *min_element(input.begin(), input.end());
        for(int k = 0; k < input.size(); k++) {
            if(input[k] == min1){
                index = k;
                break;
            }
        }
        set<int> s(input.begin(), input.end());
        if(s.size() != input.size()) {
            result[i] = 0;
        }
        else {
            input.erase(input.begin() + index);
            min2 = *min_element(input.begin(), input.end());
            result[i] = abs(min2 - min1);
        }
        input.clear();
    }
    for(int i = 0; i < n; i++)
        cout << result[i] << endl;
    return 0;
}