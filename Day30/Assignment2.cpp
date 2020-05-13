//Maximize the profit after selling the tickets
//https://www.geeksforgeeks.org/maximize-the-profit-after-selling-the-tickets/

#include <iostream>
using namespace std;

int maxIndex(int arr[], int size) {
	int max = arr[0], maxI = 0;
	for(int i=0; i < size; i++) {
		if(arr[i] > max) {
			max = arr[i];
			maxI = i;
		}
	}
	return maxI;
}

int main() {
	// your code goes here
	int seats[] = {2, 3, 4, 5, 1};
	int size = sizeof(seats)/sizeof(seats[0]);
	int n = 6, count = 0, result = 0, index;
	while(count < n) {
		index = maxIndex(seats, size);
		result += seats[index];
		seats[index]--;
		count++;
	}
	cout << "The maximized profit is " << result << endl;
	return 0;
}