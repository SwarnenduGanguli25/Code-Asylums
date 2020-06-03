/*
    Take as input N, a number. Print the following pattern (for N = 6)
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
    1 5 10 10 5 1
*/

#include<iostream>
#include<vector>
using namespace std;

void printRecursion(int start, int n) {
    vector<vector<int>> intermediate(n);
    if(start >= n)
        return;
    if(start == 0) {
        cout << "1" << endl;
        intermediate[start].push_back(1);
        printRecursion(start + 1, n);
    }
    else if(start == 1) {
        cout << "1  1"<< endl;
        intermediate[start].push_back(1);
        intermediate[start].push_back(1);
        printRecursion(start + 1, n);
    }
    else {
        //cout << "here" << endl;
        intermediate[start].push_back(1);
        //cout << "not here" << endl;
        cout << intermediate[start][0] << " ";
        //cout << "not here 2" << endl;
        int i;
        for(i = 1; i < start; i++) {
            intermediate[start].push_back(intermediate[start - 1][i - 1] + intermediate[start - 1][i]); 
            cout << intermediate[start][i] << " ";
        }
        intermediate[start].push_back(1);
        cout << intermediate[start][i] << endl;
        printRecursion(start + 1, n);
    }
}

int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    printRecursion(0, n);
    return 0;
}