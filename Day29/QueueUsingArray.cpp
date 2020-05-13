// Queue using Array
#include <iostream>
using namespace std;

class Queue{
	int q[10], front, rear;
	public:
		Queue() {
			front = -1;
			rear = -1;
		}
		
		bool isFull() {
			if(rear == 9) {
				return true;
			}
			else{
				return false;
			}
		}
		
		void enqueue(int val) {
			if(front == -1)
				front = 0;
			rear++;
			q[rear] = val;
			cout << val << " inserted" << endl;
		}
		
		void dequeue() {
			int value = q[front];
			if(front>=rear) {
				front = -1;
				rear = -1;
			}
			else {
				front++;
			}
			cout << value << " removed" << endl;
		}
		
		void display() {
			for(int i = front; i <= rear; i++) {
				cout << q[i] << " ";
			} 
			cout << endl;
		}
};

int main() {
	// your code goes here
	Queue qu;
	qu.enqueue(10);
	qu.enqueue(20);
	qu.enqueue(30);
	qu.enqueue(40);
	qu.display();
	qu.dequeue();
	qu.display();
	return 0;
}