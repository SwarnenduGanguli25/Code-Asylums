// Reversing the linked list using recursion
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

struct Node* head = NULL;

void push(int new_data) {
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = NULL;
	if(head == NULL) {
		head = new_node;
		return;
	}
	struct Node* temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
}

void reverse(struct Node* temp) {
	if(temp == NULL) {
		return;
	}
	reverse(temp->next);
	cout << temp->data << " ";
}

void display() {
	if(head == NULL) {
		cout << "Empty" << endl;
		return;
	}
	struct Node* temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	// your code goes here
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	cout << "After reversing " << endl;
	reverse(head);
	return 0;
}