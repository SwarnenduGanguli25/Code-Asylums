// Queue using Linked List
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int new_data) {
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = NULL;
	cout << new_data << " inserted" << endl;
	if(front == NULL) {
		front = new_node;
		rear = new_node;
		return;
	}
	rear->next = new_node;
	rear = new_node;
}

void dequeue() {
	if(front == NULL) {
		cout << "Queue is empty" << endl;
		return;
	}
	if(front->next == NULL) {
		cout << front->data << " deleted" << endl;
		front = NULL;
		rear = NULL;
		return;
	}
	cout << front->data << " deleted" << endl;
	front = front->next;
}

void display() {
	if(front == NULL) {
		cout << "Empty Queue" << endl;
		return;
	}
	struct Node* temp = front;
	cout << "The elements in the queue are ";
	while(temp != rear) {
		cout << temp->data << "->" ; 
		temp = temp->next;
	}
	cout << temp->data << endl;
}

int main() {
	// your code goes here
	dequeue();
	display();
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	display();
	dequeue();
	display();
	enqueue(70);
	display();
	dequeue();
	display();
	return 0;
}