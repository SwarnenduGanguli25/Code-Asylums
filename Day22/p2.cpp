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
	cout << endl;
}


int main() {
	struct Node* head1 = NULL;
	struct Node* head2 = NULL;

	int n1, n2;
	cout << "Enter the number of elements of first Linked List" << endl;
	cin >> n1;
	cout << "Enter the sorted elements of first linked list" << endl;
	int val;
	for(int i = 0 ; i < n1; i++) {
		cin >> val;
		push(&head1, val);
	}

	cout << "Enter the number of elements of second Linked List" << endl;
	cin >> n2;
	cout << "Enter the sorted elements of second linked list" << endl;
	for(int i = 0 ; i < n2; i++) {
		cin >> val;
		push(&head2, val);
	}

	cout << "First Linked List" << endl;
	printLinkedList(head1);

	cout << "Second Linked List" << endl;
	printLinkedList(head2);

	struct Node* temp1 = head1;
	struct Node* temp2 = head2;

	struct Node* head3 = NULL;
	struct Node* temp3 = head3;

	while(temp1!=NULL) {
		while(temp2!=NULL) {
			if((temp1->data < temp2->data) && (head3 == NULL) ) {
				head3 = temp1;
				temp1 = temp1->next;
				temp3 = head3;
				break;
			}
			else if((temp1->data < temp2->data) && (head3 != NULL)) {
				temp3->next = temp1;
				temp1 = temp1->next;
				temp3 = temp3->next;
				break;
			}
			else if(temp1->data > temp2->data) {
				temp2 = temp2->next;
			} 
			else if(temp1->data == temp2->data){
				temp1 = temp1->next;
				break;
			}
		}
	}

	printLinkedList(head3);

	return 0;

}