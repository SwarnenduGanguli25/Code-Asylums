#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n = 6,j;
	for(int i=0;i<n;i++) {
		for(j = 0;j < n ; j++){
			if(j < n - i - 1){
				cout << " " ;
			}
			else {
				cout <<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}