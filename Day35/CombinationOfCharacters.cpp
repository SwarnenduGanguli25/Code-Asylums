#include <iostream>
using namespace std;
 
void combinations(string arr, int reqLen, int start, int currLen, bool check[], int len) {
	if(currLen > reqLen)
		return;
	else if(currLen == reqLen) {
		for(int i=0; i < len; i++) {
			if(check[i] == true)
				cout <<arr[i];
		}
		cout << " ";
		return;
	}
	if(start == len)
		return;
	check[start] = true;
	combinations(arr, reqLen, start+1, currLen+1, check, len);
	check[start] = false;
	combinations(arr, reqLen, start+1, currLen, check, len);
}
 
int main() {
	// your code goes here
	string arr = "ABCD";
	int size = arr.length();
	bool check[size] = {false};
	for(int i = 1; i < size + 1; i++)
		combinations(arr, i, 0, 0, check, size);
	return 0;
}