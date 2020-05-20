#include<iostream>
using namespace std;

void swap(char* str1, char* str2) {
    char* temp = str1;
    str1 = str2;
    str2 = temp;
}

void permutations(string str, int i, int size) {
    if(i == size - 1) {
        cout << str << endl;
        return;
    }
    for(int j = i; j < size; j++) {
        swap(str[i], str[j]);
        permutations(str, i+1, size);
        swap(&str[i], &str[j]);
    }
}

int main() {
    string str = "ABCD";
    int size = str.length();
    permutations(str, 0, size);
    return 0;
}