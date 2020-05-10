//Doubly Linked List

#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* prev;
	struct Node* next;
};

struct Node* head = NULL;

void insertF(int new_data) {
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->prev = NULL;
	new_node->next = head;
	head = new_node;
} 

void insertE(int new_data) {
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = NULL;
	struct Node* temp = head;
	if(temp == NULL) {
		new_node->prev = NULL;
		head = new_node;
		return;
	}
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
}

void deleteB() {
	if(head == NULL) {
		cout << "No elements to delete" << endl;
		return;
	}
	if(head->next == NULL) {
		head = NULL;
		return;
	}
	head = head->next;
	head->prev = NULL;
}

void deleteE() {
	if(head == NULL) {
		cout << "No elements to delete" << endl;
		return;
	}
	if(head->next == NULL) {
		head = NULL;
		return;
	}
	struct Node* temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->prev->next = NULL;
}

void printList() {
	struct Node* temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	int n_beg, n_end, i, val;
	cout << "Enter the number of elements to be inserted at the beginning" << endl;
	cin >> n_beg;

	cout << "Enter the elements to be inserted at the beginning"<< endl;
	for(i=0; i<n_beg; i++) {
		cin >> val;
		insertF(val);
	}

	cout << "After inserting at the beginning" << endl;
	printList();

	cout << "Enter the number of elements to be inserted at the end" << endl;
	cin >> n_end;

	cout << "Enter the elements to be inserted at the end" << endl;
	for(i = 0; i < n_end; i++) {
		cin >> val;
		insertE(val);
	}

	cout << "After inserting at the End" << endl;
	printList();

	deleteB();
	cout << "After deleting at the beginning" << endl;
	printList();

	deleteE();
	cout << "After deleting at the end" << endl;
	printList();

 	return 0;
}