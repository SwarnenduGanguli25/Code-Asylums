#include<iostream>
using namespace std;

#define N 5

int maze[N][N] = {
    {1, 0, 0, 0, 0},
    {1, 1, 0, 1, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 1, 0},
    {1, 1, 1, 1, 1}
};

int sol[N][N] = {0};

bool isValid(int i, int j) {
    if(i >= 0 && i < N && j >= 0 && j < N && maze[i][j] == 1)
        return true;
    return false;
}
 
bool path(int i, int j) {
    if(i == N-1 && j == N - 1) {
        sol[i][j] = 1;
        return true;
    }
    if(isValid(i, j)) {
        sol[i][j] = 1;
        if(path(i+1, j)) {
            return true;
        }
        if(path(i, j+1))
            return true;
        
        sol[i][j] = 0;
        return false;
    }
    return false;

}

void display() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    //cout << "Hello World" << endl;
    path(0, 0);
    display();
    return 0;
}