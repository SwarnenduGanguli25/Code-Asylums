/*
    Given a number n, find all binary sequences of length 2n such that sum of first n bits is same as sum of last n bits.
    
    Input:  N = 2
    Output: 
    0101 1111 1001 0110 0000 1010 

    Input:  N = 3
    Output:  
    011011 001001 011101 010001 101011 111111
    110011 101101 100001 110101 001010 011110 
    010010 001100 000000 010100 101110 100010 
    110110 100100
*/

#include<iostream>
using namespace std;

void result(int diff, int out[], int start, int end, int size) {
    if(abs(diff) > (end - start + 1) / 2)
        return;
    
    if(start > end) {
        if(diff == 0) {
            //int size = sizeof(out)/sizeof(out[0]);
            for(int j = 0; j < size; j++)
                cout << out[j];
            cout << " ";
            return;
        }
    }

    out[start] = 0, out[end] = 1;
    result(diff + 1, out, start + 1, end - 1, size);

    out[start] = out[end] = 0;
    result(diff, out, start + 1, end - 1, size);

    out[start] = out[end] = 1;
    result(diff, out, start + 1, end - 1, size);

    out[start] = 1, out[end] = 0;
    result(diff - 1, out, start + 1, end - 1, size);
    
}



int main() {
    cout << "Enter the number" << endl;
    int n;
    cin >> n;
    int out[2*n];
    result(0, out, 0, 2*n - 1, 2*n);
    return 0;
}