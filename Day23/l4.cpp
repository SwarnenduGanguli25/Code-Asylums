/* Write a GetNth() function that takes a linked list and an integer index and 
returns the data value stored in the node at that index position.
Example:
Input:  1->10->30->14,  index = 2
Output: 30  
The node at index 2 is 30
*/

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

int GetNth(struct Node* head, int index) {
	int count = 0;
	while(count < index) {
		head = head->next;
		count++;
	}
	return head->data;
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
	int val;
	for(int i = 0 ; i < n; i++) {
		cin >> val;
		push(&head, val);
	}

	int index;
	cout << "Enter the index" << endl;
	cin >> index;

	cout << "Initial Linked List" << endl;
	printLinkedList(head);

	cout << "The element at the nth-index is " << GetNth(head, index) << endl;


	return 0;

}