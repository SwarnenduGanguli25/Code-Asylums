#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void push(struct Node **head_ref, int new_data) {
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = NULL;
	if(*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}
	struct Node* temp = *head_ref;
	while(temp->next!=NULL) {
		temp = temp->next;
	}
	temp->next = new_node;
}

void printLinkedList(struct Node* temp) {
	while(temp!=NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main() {
	struct Node* head = NULL;

	int n;
	cout << "Enter the number of elements" << endl;
	cin >> n;
	cout << "Enter the elements" << endl;
	int val;
	for(int i = 0 ; i < n; i++) {
		cin >> val;
		push(&head, val);
	}

	int m;
	cout << "Enter m" << endl;
	cin >> m;

	cout << "Initial Linked List" << endl;
	printLinkedList(head);

	struct Node* last = head;
	while(last->next != NULL){
		last = last->next;
	}
	last->next = head;

	struct Node* temp = head;
	int count = 0;
	while(++count < n-m) {
		temp = temp->next;
	}
	head = temp->next;
	temp->next = NULL;

	cout <<  "Final Linked List" << endl;
	printLinkedList(head);

	return 0;

}