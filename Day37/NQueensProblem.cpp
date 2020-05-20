#include<iostream>
using namespace std;

#define N 4

int board[N][N];

int count = 0;

void display() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isValid(int row, int col) {
    int i, j;
    for(i = 0; i < col; i++) {
        if(board[row][i])
            return false;
    }

    for(i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if(board[i][j])
            return false;
    }

    for(i = row, j = col; j >= 0 && i < N; i++, j--) {
        if(board[i][j])
            return false;
    }

    return true;
}

bool findSol(int j) {
    if( j >= N) {
        return true;
    }
    for(int i = 0; i < N; i++) {
        if(isValid(i, j)) {

            board[i][j] = 1;
            if(findSol(j+1)) {
                return true;
            }
            board[i][j] = 0;
        }
    }
    return false;
}


int main() {
    cout << "Initial Board" << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    display();
    bool ans = findSol(0);
    cout << ans << endl;
    cout << "Final Board" << endl;
    display();
    return 0;
}