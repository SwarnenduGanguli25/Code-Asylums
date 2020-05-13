// Length of Smallest Subsequence such that sum of elements is greater than equal to K
// https://www.geeksforgeeks.org/length-of-smallest-subsequence-such-that-sum-of-elements-is-greater-than-equal-to-k/

#include <iostream>
using namespace std;

int queue[20], front = -1, rear = -1;

void enqueue(int new_data) {
	 if(rear >= 20) {
	 	cout << "Queue is full" << endl;
	 	return;
	 }
	 if(front == -1) {
	 	queue[++front] = new_data;
	 	++rear;
	 	return;
	 }
	 queue[++rear] = new_data;
}

void dequeue() {
	if(front > rear || front == -1) {
		cout << "Queue is empty" << endl;
		return;
	}
	cout << "The element deleted is " << queue[front++] << endl;
}

void display() {
	if(front > rear || front == -1) {
		cout << "Queue is empty" << endl;
		return;
	}
	cout << "The elements in the queue are : "; 
	for(int i = front; i <= rear; i++)
		cout << queue[i] << " " ;
	cout << endl;
}

int main() {
	// your code goes here
	int arr[] = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5};
	int k = 35;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < size; i++)
		enqueue(arr[i]);
	display();
	int least_count;
	
	while(front <= rear) {
		int index = front, sum = 0, count = 0;
		while(sum <= k) {
			if(index <= rear) {
				sum += queue[index++];
				cout << "Sum:  " << sum << endl;
				count++;
			}
			else {
				break;	
			}
		}
		front++;
		if(sum > k && least_count >= count) {
			least_count = count;
		}
		cout << "Least count : " << least_count << endl;
	}
	cout << "Required count is " << least_count << endl; 
	return 0;
}