#include <bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int n,a[100],k, count = 0,temp = -1;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n); 
	for(int i=0;i<n;i++) {
		for(int j = i; j < n; j++ ) {
			if((a[j] == a[i])){
				count++;
			}
		}
		if(temp != a[i])
			cout << a[i] << " " << count << endl;
		count  = 0;
		temp = a[i];
	}
	return 0;
}