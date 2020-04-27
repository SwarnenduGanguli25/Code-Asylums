#include <bits/stdc++.h>
using namespace std;
int main() {
int flag = 0;
int A[5] = {1,3,4,3,1};
int size = sizeof(A)/sizeof(int);
for(int i=0;i<size/2;i++) {
cout<<"A[i]: "<<A[i]<<endl;
if(A[i]!=A[size-i-1]) {
flag=1;
break;
}
}
if(flag ==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
} 