//Queue using Array
#include <iostream>
using namespace std;
#define SIZE 10

int front = 0, tail = -1;

bool isEmpty() {
	if(tail < 0)
		return true;
	else
		return false;
}

void enqueue(int arr[], int data) {
	if(tail >= SIZE) {
		cout << "Queue is full" << endl;
		return;
	}
	arr[++tail] = data;
}

void dequeue(int arr[]) {
	if(isEmpty()) {
		cout << "Queue is empty" << endl;
		return;
	}
	cout << "The dequeued element is " << arr[front++] << endl;
}

int getFront(int arr[]) {
	return arr[front];
} 


void printQueue(int arr[]) {
	if(isEmpty()) {
		cout << "Queue is empty" << endl;
		return;
	}
	cout << "The elements in the array are ";
	for(int i = front; i <= tail; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	// your code goes here
	int arr[SIZE];
	printQueue(arr);
	dequeue(arr);
	enqueue(arr, 10);
	enqueue(arr, 20);
	enqueue(arr, 30);
	enqueue(arr, 40);
	printQueue(arr);
	dequeue(arr);
	printQueue(arr);
	if(!isEmpty()) 
		cout << "The front element is " << getFront(arr) << endl;
	printQueue(arr);
	return 0;
}