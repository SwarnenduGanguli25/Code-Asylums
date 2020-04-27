#include <bits/stdc++.h>
using namespace std;

int main() {
int A[10] = {1,2,3,2,5,5,6,1,7,7};
int count[101] = {0};
for(int i=0;i<10;i++) {
count[A[i]]++;
}
int max = INT_MIN;
for(int i=0;i<101;i++) {
if(count[i]>1){
if(i>max)max = i;
}
}
cout<<max;
} 