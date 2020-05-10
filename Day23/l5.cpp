/* Given a linked list, the task is to find the sum of all subsets of a linked list.
Examples:
Input: 2 -> 3 -> NULL
Output: 10
Explanation:
All non-empty subsets are {2}, {3} and {2, 3}
Total sum = 2 + 3 + (2 + 3) = 10
*/

#include<iostream>
#include<cmath>
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

int sum(struct Node* head, int n) {
	int sum = 0, result;
	struct Node *temp = head;
	while(temp!=NULL) {
		sum += temp->data;
		temp = temp->next;
	}
	result = sum * pow(2, n-1);
	return result;
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

	cout << "The sum of all subsets is " << sum(head, n) << endl;


	return 0;

}