// Quick Sort
#include <iostream>
using namespace std;

int partition(int a[], int st, int en) {
	int i = st-1;
	int pivot = a[en];
	int temp;
	for(int j = st ; j < en; j++) {
		if(a[j] < pivot) {
			i++;
			//Swap
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	i++;
	//Swap
	a[en] = a[i];
	a[i] = pivot;
	return i;
}

void quickSort(int a[],int st,int en) {
	
	if(st < en) {
		int pos = partition(a, st, en);
		quickSort(a, st, pos-1); 
		quickSort(a, pos+1, en);
	}	
}

int main() {
	// your code goes here
	int a[] = {6, 8, 5, 7, 2, 1, 3, 4};
	int size = sizeof(a)/sizeof(a[0]);
	cout << "Before Sorting" << endl;
	for(int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	quickSort(a, 0, size - 1);
	cout << "After Sorting" << endl;
	for(int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}