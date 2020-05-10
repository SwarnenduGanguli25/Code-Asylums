// Stack using array
#include <iostream>
using namespace std;
#define SIZE 10

int top = -1;

bool isEmpty() {
	if(top < 0)
		return true;
	else
		return false;
}

void push(int arr[], int data) {
	if(top >= SIZE) {
		cout << "Overflow" << endl;
		return;
	}
	arr[++top] = data;
}

void pop(int arr[]) {
	if(isEmpty()) {
		cout << "Underflow" << endl;
		return;
	}
	cout << "The deleted element is " << arr[top--] << endl;
}

int getTop(int arr[]) {
	return arr[top];
}

void printList(int arr[]) {
	if(isEmpty()) {
		cout << "The stack is empty" << endl;
		return;
	}
	cout << "The elements in the stack are ";
	for(int i=0; i <= top; i++) {
		cout << arr[i] <<" ";
	} 
	cout << endl;
}

int main() {
	// your code goes here
	int arr[SIZE];
	printList(arr);
	pop(arr);
	if(!isEmpty()) 
		cout << "The top element is " << getTop(arr) << endl;
	push(arr, 10);
	push(arr, 20);
	push(arr, 30);
	printList(arr);
	pop(arr);
	printList(arr);
	if(!isEmpty()) 
		cout << "The top element is " << getTop(arr) << endl;
	return 0;
}