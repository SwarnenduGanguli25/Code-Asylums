// Tower of Hanoi

#include<iostream>
using namespace std;

void towerOfHanoi(int n, char start, char inter, char end_) {
    if(n == 1) {
        cout << "Disk 1 moved from " << start << " to " << end_ << endl;
        return;
    }
    towerOfHanoi(n - 1, start, end_, inter);
    cout << "Disk " << n << " from " << start << " to " << end_ << endl;
    towerOfHanoi(n - 1, inter, start, end_);
}

int main() {
    cout << "Enter the number of decks" << endl;
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}