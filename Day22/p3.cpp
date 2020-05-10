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

	cout << "Initial Linked List" << endl;
	printLinkedList(head);

	//Assuming maximum element in linked list is 100
	int count_array[101] = {0};

	struct Node* temp = head;
	while(temp!=NULL){
		count_array[temp->data]++;
		temp = temp->next;
	}	
	int result = 0;
	for(int i = 1; i < 101; i++) {
		if(count_array[i] == i) {
			result++;
		}
	}
	cout << "The required count is " << result << endl;

	return 0;

}