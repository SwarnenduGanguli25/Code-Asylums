#include <iostream>
using namespace std;

int main() {
int A[10] = {1,2,3,2,5,5,6,1,7,7};
int count[101];
for(int i=0;i<101;i++) {
count[i] = 0;
}
for(int i=0;i<10;i++) {
count[A[i]]++;
}
for(int i=0;i<101;i++) {
if(count[i] == 1) {
printf("%d\n", i);
}
}
} 