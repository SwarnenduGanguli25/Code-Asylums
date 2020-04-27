#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//Find the non-duplicate number in the array given there is only one such number.
	//Aditya.s0110@gmail.com
	// TODO: Not complete
	int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	int flag = 1;
	for (int i = 0; i < arr_size; i++) {
		for (int j = 0; j < arr_size; j++) {
			if(arr[j] == arr[i]){
				flag = 0;
				break;
			}
		}
		if(flag){
			cout << arr[i] << endl;
		}
		flag = 1;
	}
	
	return 0;
}