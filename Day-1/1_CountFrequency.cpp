#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//TODO : without using array print all the digits with equal max frequency
	int n,a[100], count = 0, max_count = 0, max_digit;
	cin >> n;
	for(int i=0; i < n; i++)
		cin >> a[i];
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[j] == a[i]) {
				count++;
			}
		}
		if(count >= max_count){
			max_count = count;
			max_digit = a[i];
		}
		count = 0;
	}
	cout << max_digit << " " << max_count <<endl;
	return 0;
}