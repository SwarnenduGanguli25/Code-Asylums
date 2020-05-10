#include<iostream>
using namespace std;

struct Node {
	char data;
	struct Node* next;
};

void push(struct Node **head_ref, char new_data) {
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
	cout << endl;
}


int main() {
	struct Node* head = NULL;

	int n;
	cout << "Enter the number of elements" << endl;
	cin >> n;
	cout << "Enter the elements" << endl;
	char val;
	for(int i = 0 ; i < n; i++) {
		cin >> val;
		push(&head, val);
	}


	cout << "Initial Linked List" << endl;
	printLinkedList(head);

	struct Node *prev = NULL, *next = NULL, *curr = head;
	while(curr!=NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;

	printLinkedList(head);

	return 0;

}